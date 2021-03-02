#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int num;
    cin >> num;
    while(num != 1)
    {
        if(num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = (num * 3 + 1)/2;
        }
        count += 1;
    };
    cout << count;
    return 0;
}