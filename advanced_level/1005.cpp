#include <iostream>
#include <string>
// #include <map>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    // map<int,string> m;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    string s1 = to_string(sum);
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << arr[s1[0] - '0'];
    for (int i = 1; i < s1.length(); i++)
    {
        cout << " " << arr[s1[i] - '0'];
    }
    cout << "\n";
    return 0;
}