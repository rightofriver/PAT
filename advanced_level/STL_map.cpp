#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["123"] = 0;
    map<string,int>::iterator it = mp.find("123");
    cout << it->first << " " << it->second;
    return 0;
}