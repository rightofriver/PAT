#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char a,char b){
    return a > b;
}
int main()
{
    string n;
    cin >> n;
    int len = n.length();
    n.insert(0,4-len,'0');
    do{
        string a = n,b = n;
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end());
        n = to_string(stoi(a) - stoi(b));
        len = n.length();
        n.insert(0,4-len,'0');
        cout << a << " - " << b << " = " << n << endl;
    }while(n != "6174" && n != "0000");
    return 0;
}