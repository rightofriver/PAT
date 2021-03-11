#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int temp = 0,sum = -1,leftindex = 0,rightindex = n-1,tempindex = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> v[i];
        temp += v[i];
        if(temp < 0)
        {
            temp = 0;
            tempindex = i + 1;
        }
        else if(temp > sum)
        {
            sum = temp;
            leftindex = tempindex;
            rightindex = i;
        }
    }
    if(sum < 0) sum = 0;
    printf("%d %d %d\n",sum,v[leftindex],v[rightindex]);
    return 0;
}