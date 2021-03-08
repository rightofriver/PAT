#include <iostream>
#include <vector>
using namespace std;
struct node{
    int data;
    node *lchild,*rchild;
};
const int maxn = 1010;
int n;
vector<int> origin,pre,preM,post,postM;
void insert(node * &root,int data)
{
    
}
int main()
{
    cin >> n;
    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        origin.push_back(data);
        insert(root,data);
    }
    return 0;
}