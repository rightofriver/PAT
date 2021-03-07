#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int address, data, next;
};
int main()
{
    int address0, n, k;
    int s, d, e;
    node link[100010];
    vector<node> pre;
    vector<node> ans;
    scanf("%d %d %d", &address0, &n, &k);
    for (int i = 0; i < n; i++)
    {
        // scanf("%d %d %d",&link[i].address,&link[i].data,&link[i].next);
        scanf("%d %d %d",&s,&d,&e);
        link[s].address = s;
        link[s].data = d;
        link[s].next = e; 
    }
    while (address0 != -1)
    {
        pre.push_back(link[address0]);
        address0 = link[address0].next;
    }
    for (int i = 0; i < pre.size(); i++)
    {
        if (pre[i].data < 0)
            ans.push_back(pre[i]);
    }
    for (int i = 0; i < pre.size(); i++)
    {
        if (pre[i].data >= 0 && pre[i].data <= k)
            ans.push_back(pre[i]);
    }
    for (int i = 0; i < pre.size(); i++)
    {
        if (pre[i].data > k)
            ans.push_back(pre[i]);
    }
    for (int i = 0; i < ans.size() - 1; i++)
    {
        printf("%05d %d %05d\n", ans[i].address, ans[i].data, ans[i + 1].address);
    }
    printf("%05d %d -1", ans[ans.size() - 1].address, ans[ans.size() - 1].data);
}