#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    int f1,f2;
    cin >> f1;
    ans += f1*6;
    for(int i = 1;i < n;i++)
    {
        cin >> f2;
        if(f2 > f1)
            ans += 6*(f2-f1);
        else
            ans += 4*(f1-f2);
        f1 = f2;
    }
    ans += 5*n;
    cout << ans << endl;
    return 0;
}