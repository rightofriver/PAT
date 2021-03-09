#include <iostream>
using namespace std;
const int maxn = 100010;
bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int prime[maxn],pNum = 0;
void Find_Prime()
{
    for (int i = 1; i < maxn; i++)
    {
        if (is_prime(i))
            prime[pNum++] = i;
    }
}
struct factor
{
    int x, cnt; //x is factor,cnt is the num
} fac[10];
int main()
{
    long n;
    int num = 0;
    cin >> n;
    Find_Prime();
    if (n == 1)
    {
        cout << "1=1";
        return 0;
    }
    cout << n << "=";
    for(int i = 0;i < pNum && prime[i]*prime[i] <= n;i++)
    {
        if(n % prime[i] == 0)
        {
            fac[num].x = prime[i];
            fac[num].cnt = 0;
            while(n % prime[i] == 0)
            {
                fac[num].cnt++;
                n /= prime[i];
            }
            num++;
        }
        if(n == 1) break;
    }
    if(n != 1){
        fac[num].x = n;
        fac[num].cnt = 1;
        num++;
    }
    for(int i = 0;i < num;i++)
    {
        if(i != 0) cout << "*";
        cout << fac[i].x;
        if(fac[i].cnt != 1)
            cout << "^" << fac[i].cnt;
    }
    cout << endl;
    return 0;
}