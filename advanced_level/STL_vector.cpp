#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i;

    cout << "vector size = " << vec.size() << endl;

    vec.push_back(1);

    cout << "extended vector size = " << vec.size() << endl;

    vector<int>::iterator v = vec.begin();
    while(v != vec.end()){
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
}