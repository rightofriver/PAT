//point 22/25
#include <iostream>
#include <vector>
using namespace std;
int maxn = -99999999;
int main()
{
    int k;
    int flag = 0;
    cin >> k;
    vector<int> num;
    for(int i = 0;i < k;i++)
    {
        int n;
        cin >> n;
        num.push_back(n);
    }
    int ans = 0;
    int path[2];
    for(int i = 0;i < num.size();i++)
    {
        ans = 0;
        for(int j = i;j < num.size();j++)
        {

            ans += num[j];
            if(num[j] > 0)
            {
                flag = 1;
            }
            if(ans > maxn)
            {
                maxn = ans;
                path[0] = i;
                path[1] = j;
            }
        }
    }
    if(flag == 0) cout << "0 " << num[0] << " " << num[num.size()-1] << endl;
    else{
        cout << maxn << " " << num[path[0]] << " " << num[path[1]] << endl;
    }
    return 0;
}