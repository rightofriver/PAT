#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
    int sqr = (int)sqrt(1.0*n);
    if(n == 1) return false;
    for(int i = 2;i <= sqr;i++)
    {
        if(n % i == 0) return true;
    }
    return false;
}
int to_dec(int n,int rad)
{

}
int to_rad(string n,int rad)
{
    
}
int main(){
    int n;
    int rad;
    do{
        cin >> n >> rad;
        string a = to_string(n);
        reverse(a.begin(),a.end());
        if(n == 0) 
        {
            cout << "Yes\n"; 
            continue;
        }
        if(rad == 10)
        {
            if(is_prime(n) && is_prime(stoi(a)))
                cout << "Yes\n";
        }
    }while(n > 0);
    return 0;
}