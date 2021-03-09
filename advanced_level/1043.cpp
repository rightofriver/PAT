#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int data;
    node *lchild, *rchild;
};
// const int maxn = 1010;
int n;
vector<int> origin, pre, preM, post, postM;
void insert(node *&root, int data)
{
    if (root == NULL) //bulid a new tree
    {
        root = new node;
        root->data = data;
        root->lchild = root->rchild = NULL;
        return;
    }
    if (data < root->data)
        insert(root->lchild, data);
    else
        insert(root->rchild, data);
}
void preOrder(node *root, vector<int> &vi) //record the result
{
    if (root == NULL)
        return;
    vi.push_back(root->data);
    preOrder(root->lchild, vi);
    preOrder(root->rchild, vi);
}
void preOrderMirror(node *root, vector<int> &vi)
{
    if (root == NULL)
        return;
    vi.push_back(root->data);
    preOrderMirror(root->rchild, vi);
    preOrderMirror(root->lchild, vi);
}
void postOrder(node *root, vector<int> &vi)
{
    if (root == NULL)
        return;
    postOrder(root->lchild, vi);
    postOrder(root->rchild, vi);
    vi.push_back(root->data);
}
void postOrderMirror(node *root, vector<int> &vi)
{
    if (root == NULL)
        return;
    postOrderMirror(root->rchild, vi);
    postOrderMirror(root->lchild, vi);
    vi.push_back(root->data);
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
        insert(root, data);
    }
    preOrder(root, pre);
    preOrderMirror(root, preM);
    postOrder(root, post);
    postOrderMirror(root, postM);
    if (origin == pre)
    {
        cout << "YES\n";
        for (int i = 0; i < post.size(); i++)
        {
            cout << post[i];
            if (i < post.size() - 1)
                cout << " ";
        }
        cout << "\n";
    }
    else if (origin == preM)
    {
        cout << "YES\n";
        for (int i = 0; i < postM.size(); i++)
        {
            cout << postM[i];
            if (i < postM.size() - 1)
                cout << " ";
        }
        cout << "\n";
    }
    else
        cout << "NO\n";
    return 0;
}