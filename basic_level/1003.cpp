#include <iostream>
using namespace std;
int main()
{
    int num;
    char sen[100];
    int posP = 0, posT = 0,flag = 0;
    int numA1 = 0, numA2 = 0, numA3 = 0, numP = 0, numT = 0;
    int i,other = 0;
    num = getchar() - '0';
    while (num > 0)
    {
        posP = 0, posT = 0,flag = 0;
        numA1 = 0, numA2 = 0, numA3 = 0, numP = 0, numT = 0;
        other = 0;
        cin >> sen;
        for (i = 0; sen[i] != '\0'; i++)
        {
            if (sen[i] == 'P')
            {
                numP++;
                posP = i;
                flag = 1;
            }
            else if (sen[i] == 'A' && flag == 0)
            {
                numA1++;
            }
            else if(sen[i] == 'A' && flag == 1)
            {
                numA2++;
            }
            else if(sen[i] == 'A' && flag == 2)
            {
                numA3++;
            }
            else if (sen[i] == 'T')
            {
                numT++;
                posT = i;
                flag = 2;
            }
            else
            {
                other++;
            }
        }
        if (other == 0 && numP == 1 && numT == 1 && posT > posP && numA2 > 0 && numA2 >= 1 && numA1*numA2 == numA3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        num--;
    }
    return 0;
}