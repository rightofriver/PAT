#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void deleteedge(int edge[][2],int n,int v)
{
    for(int i = 0;i < n;i++)
    {
        if(edge[i][0] == v || edge[i][1] == v)
        {
            edge[i][0] = edge[i][1] = 0;
        }
    }
}
bool isempty(int edge[][2],int n)
{
    for(int i  = 0;i < n;i++)
    {
        if(edge[i][0] != 0 || edge[i][1] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m, k;
    scanf("%d %d", &n, &m);
    int edge[10010][2];
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d", &edge[i][0], &edge[i][1]);
    }
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int l;
        scanf("%d", &l);
        int tempedge[10010][2];
        memcpy(tempedge,edge,10010*sizeof(int));
        for (int j = 0; j < l; j++)
        {
            int v;
            scanf("%d",&v);
            deleteedge(tempedge,m,v);
        }
        if(isempty(tempedge,m))
            printf("Yes\n");
        else
            printf("No\n");
    }
}