#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
const int maxn = 30010;
using namespace std;
struct student
{
    string id;
    int pa, mid, fin, g;
} stu[maxn];
bool cmp(student a, student b)
{
    // return a.g != b.g ? a.g > b.g : a.id < b.id;
    if (a.g != b.g)
        return a.g > b.g;
    else
        return a.id < b.id;
}
int num = 1;
int main()
{
    int p, m, n;
    map<string, int> mp;
    vector<student> v, ans;
    cin >> p >> m >> n;
    for (int i = 0; i < p; i++)
    {
        string id;
        int pa;
        cin >> id >> pa;
        if (pa >= 200)
        {
            student st = {id, pa, -1, -1, 0};
            v.push_back(st);
            mp[id] = num;
            num++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        string id;
        int mid;
        cin >> id >> mid;
        if (mp[id] != 0)
            v[mp[id] - 1].mid = mid;
        //mp[id] != 0 means id appeared
    }
    for (int i = 0; i < n; i++)
    {
        string id;
        int fin;
        cin >> id >> fin;
        if (mp[id] != 0)
        {
            int temp = mp[id] - 1;
            v[temp].fin = v[temp].g = fin;
            if (v[temp].mid > v[temp].fin)
                v[temp].g = int(v[temp].mid * 0.4 + v[temp].fin * 0.6 + 0.5);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].g >= 60)
            ans.push_back(v[i]);
    }
    sort(ans.begin(), ans.end(), cmp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].id << " " << ans[i].pa << " " << ans[i].mid << " " << ans[i].fin << " " << ans[i].g << endl;
    }
    return 0;
}