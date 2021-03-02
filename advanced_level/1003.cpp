#include <iostream>
#include <vector>
using namespace std;
const int inf = 99999999;
int main()
{
    int n, m, c1, c2, cnt = 1, suml = 0;
    int i, j;
    vector<int> weight;
    int temp, c1t, c2t, l;
    scanf("%d %d %d %d", &n, &m, &c1, &c2);
    int city[500][500];
    fill(city[0], city[0] + 500 * 500, inf);
    int path[500] = {0}; //the last bit of path record the length of the path
    bool visit[500];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        weight.push_back(temp);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d %d %d", &c1t, &c2t, &l);
        city[c1t][c2t] = city[c2t][c1t] = l;
    }
    i = c1;
    path[0] = c1;
    // for (j = 0; j < n; j++)
    // {
    //     if (i == c2)
    //     {
    //         break;
    //     }
    //     if (city[i][j] != 0 && visit[j] == 0) //city[i][j] != means i and j is reachable
    //     {
    //         visit[j] = 1;
    //         i = j;
    //         path[cnt] = j;
    //         cnt++;
    //         suml += city[i][j];
    //     }
    // }
    
    return 0;
}