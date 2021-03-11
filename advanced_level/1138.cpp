#include <iostream>
#include <vector>
using namespace std;
const int maxn = 50010;
int pre[maxn], in[maxn];
struct node
{
    int data;
    node *lchild, *rchild;
};
vector<int> post;
node *create(int preL, int preR, int inL, int inR)
{
    if (preL > preR)
        return NULL;
    node *root = new node;
    root->data = pre[preL];
    int i;
    for (i = inL; i <= inR; i++)
    {
        if (in[i] == pre[preL])
        {
            break;
        }
    }
    int numLeft = i - inL;
    root->lchild = create(preL + 1, preL + numLeft, inL, i - 1);
    root->rchild = create(preL + numLeft + 1, preR, i + 1, inR);
    return root;
}
void postOrder(node *root, vector<int> &vi)
{
    if (root == NULL)
        return;
    postOrder(root->lchild, vi);
    postOrder(root->rchild, vi);
    vi.push_back(root->data);
}
int main()
{
    int n;
    cin >> n;
    // node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    node *root = create(0, n - 1, 0, n - 1);
    postOrder(root, post);
    // for(int i = 0;i < post.size();i++)
    // {
    //     cout << post[i] << " ";
    // }
    cout << post[0] << endl;
    return 0;
}