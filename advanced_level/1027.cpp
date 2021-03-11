#include <iostream>
#include <string>
using namespace std;
char arr[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
string to_Mars(int a)
{
    string s;
    if(a > 13){
        s.push_back(arr[a/13]);
        s.push_back(arr[a%13]);
        return s;
    }
    else{
        s.push_back(arr[a]);
        return s;
    }
}
int main()
{
    int r,g,b;
    cin >> r >> g >> b;
    string mr,mg,mb;
    mr = to_Mars(r);
    mg = to_Mars(g);
    mb = to_Mars(b);
    mr.insert(0,2-mr.length(),'0');
    mg.insert(0,2-mg.length(),'0');
    mb.insert(0,2-mb.length(),'0');
    cout << "#" << mr << mg << mb << endl;
    return 0;
}