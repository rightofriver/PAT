#include <iostream>
#include <vector>
using namespace std;
// const int maxn = 40;
int main()
{
    int d, n, cnt = 0;
    cin >> d >> n;
    vector<int> v, ans;
    v.push_back(d);
    if(n == 1)
    {
        cout << d;
    }
    for (int i = 0; i < n -1; i++)
    {
        ans.clear();
        for (int j = 0; j < v.size(); j++)
        {
            cnt = 0;
            int k;
            ans.push_back(v[j]);
            for (k = j; k < v.size() && v[j] == v[k]; k++)
            {
                cnt++;
            }
            j += cnt - 1;
            ans.push_back(cnt);
        }
        v = ans;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}