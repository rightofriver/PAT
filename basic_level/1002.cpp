#include <iostream>
using namespace std;
int main()
{
    char num[100];
    int dig[3];
    int i,j,tempdig;
    int ans = 0,count = 0;
    cin >> num;
    for(j = 0;;j++)
    {
        if(num[j] == '\0')
        {
            break;
        }
        count += num[j] - '0';
    }
    for(i = 0;count != 0;)
    {
        dig[i] = count % 10;
        count /= 10;
        i++;
    }   
    i--;
    for(tempdig = 0;i >= 0;i--)
    {
        tempdig = dig[i];
        switch(tempdig){
            case 0:
                cout << "ling";
                break;
            case 1:
                cout << "yi";
                break;
            case 2:
                cout << "er";
                break;
            case 3:
                cout << "san";
                break;
            case 4:
                cout << "si";
                break;
            case 5:
                cout << "wu";
                break;
            case 6:
                cout << "liu";
                break;
            case 7:
                cout << "qi";
                break;
            case 8:
                cout << "ba";
                break;
            case 9:
                cout << "jiu";
                break;
        }
        if(i > 0)
        {
            cout << " "; 
        }
    }
    return 0;
}