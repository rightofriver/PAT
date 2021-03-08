#include <iostream>
using namespace std;
struct node{
    char data;
    int next;
    bool visit = false;
};
int main()
{
    node link[100010];
    int addr1,addr2;
    int n;
    int addr,next;
    char data;
    cin >> addr1 >> addr2 >> n;
    for(int i = 0; i < n ;i++)
    {
        cin >> addr >> data >> next;
        link[addr].data = data;
        link[addr].next = next;
    }
    int p;
    for(p = addr1;p != -1;p = link[p].next)
    {
        link[p].visit = true;
    }
    for(p = addr2;p != -1;p = link[p].next)
    {
        if(link[p].visit == true)
            break;
    }
    if(p != -1)
        printf("%05d\n",p);
    else
        printf("-1\n");
    return 0;
}