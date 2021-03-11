#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, a, num = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    while(++num)
        if(mp[num] == 0) break;
    cout << num << endl;
    return 0;
}