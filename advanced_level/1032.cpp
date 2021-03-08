#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int address,next;
    char data;
    int n;
    int address1,address2;
    vector<int> next0;
    cin >> address1 >> address2 >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> address >> data >> next;
        next0.push_back(next);
    }
    sort(next0.begin(),next0.end());
    for(int i = 0;i < n-1;i++)
    {
        if(next0[i] == next0[i+1])
            cout << next0[i] << endl;
    }
    return 0;
}