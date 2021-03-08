#include <iostream>
using namespace std;
int back(int n)
{
    int back_n = 0;
    while (n > 0)
    {
        back_n = back_n * 10 + n % 10;
        n /= 10;
    }
    return back_n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    while (true)
    {
        int t;
        t = n + back(n);
        // printf("%d %d",n,back(n));
        if (t == back(t))
        {
            printf("%d + %d = %d\n",n,back(n),t);
            printf("%d is a palindromic number.\n", t);
            break;
        }
        else
            printf("%d + %d = %d\n",n,back(n),t);
        n = t;
        cnt++;
        if (cnt >= 10)
        {
            printf("Not found in 10 iterations.\n");
            break;
        }
    }
    return 0;
}