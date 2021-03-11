#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1010;
int e[maxn][maxn];
bool visit[maxn] = {false};
int n;
void dfs(int node)
{
    visit[node] = true;
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == false && e[node][i] == 1)
            dfs(i);
    }
}
int main()
{
    int m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        e[a][b] = e[b][a] = 1;
    }
    for (int i = 0; i < k; i++)
    {
        fill(visit, visit + 1010, false);
        int a;
        cin >> a;
        int cnt = 0;
        visit[a] = true;
        for (int j = 1; j <= n; j++)
        {
            if (visit[j] == false)
            {
                dfs(j);
                cnt++;
            }
        }
        cout << cnt - 1 << endl;
    }
    return 0;
}