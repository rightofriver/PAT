#include <iostream>
#include <algorithm>
using namespace std;
const int N = 100010;
struct Node
{
    int addr, data, next;
    bool flag = false;
};
bool cmp(Node a, Node b)
{
    if (a.flag == false || b.flag == false)
        return a.flag > b.flag;
    else
        return a.data < b.data; //cmp
}
int main()
{
    Node node[N];
    int n, addr0;
    int addr, data, next;
    cin >> n >> addr0;
    for (int i = 0; i < n; i++)
    {
        cin >> addr >> data >> next;
        node[addr].data = data;
        node[addr].next = next;
        node[addr].addr = addr;
    }
    int cnt = 0, p = addr0;
    while (p != -1)
    {
        node[p].flag = true;
        cnt++;
        p = node[p].next;
    }
    if (cnt == 0)
    {
        printf("0 -1");
    }
    else
    {
        sort(node,node+N,cmp);
        printf("%d %05d\n",cnt,node[0].addr);
        for(int i = 0;i < cnt;i++)
        {
            if(i != cnt - 1)
            {
                printf("%05d %d %05d\n",node[i].addr,node[i].data,node[i+1].addr);
            }
            else{
                printf("%05d %d -1\n",node[i].addr,node[i].data);
            }
        }
    }
    return 0;
}