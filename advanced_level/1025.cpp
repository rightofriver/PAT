#include <iostream>
// #include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 30010;
struct stu
{
    char reg[15];
    int score;
    int local_num;
    int local_rank;
};
stu s[maxn];
bool cmp(stu a, stu b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.reg, b.reg) < 0;
}
int main()
{
    int n, k, num = 0; //num is number of all stu
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> s[num].reg >> s[num].score;
            s[num].local_num = i+1;
            num++;
        }
        sort(s + num - k, s + num, cmp);
        s[num - k].local_rank = 1;
        for (int j = num - k + 1; j < num; j++)
        {
            if (s[j].score == s[j - 1].score)
            {
                s[j].local_rank = s[j - 1].local_rank;
            }
            else
                s[j].local_rank = j + 1 - num + k;
        }
    }
    cout << num << endl;
    sort(s, s + num, cmp); 
    int r = 1;
    for (int i = 0; i < num; i++)
    {
        if (i > 0 && s[i].score != s[i - 1].score)
            r = i + 1;
        cout << s[i].reg << " ";
        cout << r << " "<< s[i].local_num << " "<< s[i].local_rank << endl;
    }
    // sort(s.begin(), s.end(), cmp);
    return 0;
}