#include <iostream>
// #include <string>
using namespace std;
int main()
{
    int m,num;
    scanf("%d",&m);
    for(int i = 0;i < m;i++)
    {
        scanf("%d",&num);
        string s  = to_string(num);
        int len = s.length();
        int a = stoi(s.substr(0,len/2));
        int b = stoi(s.substr(len/2,len));
        if(a*b != 0 && num % (a*b) == 0)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}