#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 110;
struct node
{
    int weight;
    vector<int> child;
};
node tree[maxn];
int path[maxn];
int n, m, S; //m non-leave
bool cmp(int a, int b)
{
    return tree[a].weight > tree[b].weight;
}
void DFS(int index, int numNode, int sum)
{
    if (sum > S)
        return; //numNode record the length of path
    else if (sum == S)
    {
        if (tree[index].child.size() != 0)
            return;
        for (int i = 0; i < numNode; i++)
        {
            cout << tree[path[i]].weight;
            if (i < numNode-1)
                cout << " ";
            else
                cout << "\n";
        }
        return;
    }
    else{
        for(int i = 0;i < tree[index].child.size();i++)
        {
            int child = tree[index].child[i];
            path[numNode] = child;
            DFS(child,numNode+1,sum+tree[child].weight);
        }
    }
}
int main()
{
    cin >> n >> m >> S;
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i].weight;
    }
    for (int i = 0; i < m; i++)
    {
        int num, cnt;
        cin >> num >> cnt;
        for (int j = 0; j < cnt; j++)
        {
            int child;
            cin >> child;
            tree[num].child.push_back(child);
        }
        sort(tree[num].child.begin(), tree[num].child.end(), cmp);
    }
    path[0] = 0;
    DFS(0, 1, tree[0].weight);
    return 0;
}