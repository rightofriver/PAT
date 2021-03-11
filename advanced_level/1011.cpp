#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    float t[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> t[i][j];
        }
    }
    char arr[3] = {'W','T','L'};
    int max;
    float ans = 1;
    for (int i = 0; i < 3; i++)
    {
        max = 0;
        for (int j = 1; j < 3; j++)
        {   
            if(t[i][j] > t[i][j-1])
                max = j;
        }
        cout << arr[max] << " ";
        ans *= t[i][max];
    }
    ans = (ans*0.65-1)*2;
    printf("%.2f\n",ans);
    return 0;
}