#include <iostream>
using namespace std;
struct node{
    int rightchild,leftchild; 
    int data;
    enum color {black,red};
};
int main()
{
    int k;
    scanf("%d", &k);
    node v[40];
    for (int i = 0; i < k; i++)
    {
        int n;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&v[j].data);
            
        }
    }
}