#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 110;
vector<int> v[maxn];
int book[maxn],maxdepth = -1;
void DFS(int index,int depth)
{
    if(v[index].size() == 0)
    {
        book[depth]++;
        maxdepth = max(maxdepth,depth);
        return;
    }
    for(int i = 0;i < v[index].size();i++)
    {
        DFS(v[index][i],depth+1);
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < m;i++)
    {
        int num,cnt;
        cin >> num >> cnt;
        for(int j = 0;j < cnt;j++)
        {
            int id;
            cin >> id;
            v[num].push_back(id);
        }
    }
    DFS(1,0);
    cout << book[0];
    for(int i = 1;i <= maxdepth;i++)
    {
        cout << " " << book[i];
    }
    cout << "\n";
    return 0;
}