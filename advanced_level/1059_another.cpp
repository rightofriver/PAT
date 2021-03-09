#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 100010;
struct fac
{
    int x, cnt;
} fac[10];
bool is_prime(int n)
{
    if (n == 1)
        return false;
    int sqr = (int)sqrt(1.0 * n);
    for (int i = 2; i * i <= sqr; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int prime[maxn], numP = 0;
void Find_Prime()
{
    for (int i = 1; i < maxn; i++)
    {
        if (is_prime(i))
            prime[numP++] = i;
    }
}
int main()
{
    long n;
    cin >> n;
    int num = 0;
    Find_Prime();
    if (n == 1)
    {
        cout << "1=1";
        return 0;
    }    
    cout << n << "=";
    int sqr = (int)sqrt(1.0 * n);
    for (int i = 0; prime[i] <= sqr && i < numP; i++)
    {
        if (n % prime[i] == 0)
        {
            fac[num].x = prime[i];
            fac[num].cnt = 0;
            while (n % prime[i] == 0)
            {
                fac[num].cnt++;
                n /= prime[i];
            }
            num++;
        }
        if (n == 1)
            break;
    }
    if (n != 1)
    {
        fac[num].x = n;
        fac[num].cnt = 1;
        num++;
    }
    for (int i = 0; i < num; i++)
    {
        if (i != 0)
            cout << "*";
        cout << fac[i].x;
        if (fac[i].cnt != 1)
            cout << "^" << fac[i].cnt;
    }
    cout << endl;
    return 0;
}