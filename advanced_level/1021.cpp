#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
const int maxn = 10010;
using namespace std;
int n, maxheight = 0;
vector<vector<int> > v;
bool visit[maxn];
set<int> s;
vector<int> temp;
void dfs(int node, int height)
{
    if (height > maxheight)
    {
        temp.clear();
        temp.push_back(node);
        maxheight = height;
    }
    else if (height == maxheight)
    {
        temp.push_back(node);
    }
    visit[node] = true;
    for (int i = 0; i < v[node].size(); i++)
    {
        if (visit[v[node][i]] == false)
        {
            dfs(v[node][i], height + 1);
        }
    }
}
int main()
{
    cin >> n;
    v.resize(n + 1);
    int a, b, cnt = 0, s1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == false)
        {
            dfs(i, 1);
            if (i == 1)
            {
                if (temp.size() != 0)
                    s1 = temp[0];
                for (int j = 0; j < temp.size(); j++)
                {
                    s.insert(temp[j]);
                }
            }
            cnt++;
        }
    }
    if (cnt >= 2)
    {
        printf("Error: %d components", cnt);
    }
    else
    {
        temp.clear();
        maxheight = 0;
        fill(visit, visit + 10010, false);
        dfs(s1, 1);
        for (int i = 0; i < temp.size(); i++)
        {
            s.insert(temp[i]);
        }
        for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        {
            cout << *it << endl;
        }
    }
    return 0;
}