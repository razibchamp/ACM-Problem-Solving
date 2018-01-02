#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iostream>

using namespace std;

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
#define pi 2*acos(0.0)
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};

typedef pair<int,int>pii;
vector<pii>g[100];
int gn[100];
int hn[100];
int parent[100];

//struct cmp
//{
//
//    bool operator()(pii a, pii b)
//    {
//        return a.second < b.second;
//    }
//};


void bfs(vector<pii>g[100], int source, int goal)
{

    priority_queue<pii>q;
    parent[source] = -1;
    q.push(make_pair(source, -1*0+hn[source]));
    int explored[100];

    for(int i = 2; i<100; i++)
    {
        explored[i] = -1;
    }

    //explored[source] = 1;
    while(!q.empty())
    {
        pii u = q.top();
        int sz = g[u.first].size();
        q.pop();
        explored[u.first] = 1;
        if(u.first == goal)
        {

            return;
        }


        for(int i = 0; i<sz; i++)
        {
            int currentNode = g[u.first][i].first;
            int currentNodeCost = -1*g[u.first][i].second;
            int costGnHn = currentNodeCost  + hn[currentNode];
            if(explored[currentNode] != 1)
                parent[currentNode] = u.first;
            q.push(make_pair(currentNode, -1*costGnHn));


//            int v = g[u.first][i].first;


//            if(distance[u.first] + costUV < distance[v])
//            {
//                parent[v] = u.first;
//                //printf("Parent %d->%d\n", v, u.first);
//                //printf("U:%d V:%d Cost:%d\n", u.first,v, distance[u.first]+costUV);
//                distance[v] = distance[u.first] + costUV;
//                q.push(make_pair(v,-1*costUV));
//            }
        }
    }


}

void showPath(int node)
{
    int p = node;
    if(parent[node] == -1)
    {
        printf("1");
        return;
    }

    showPath(parent[node]);
    printf("->%d", p);
}

int main()
{

    int node, edge, cost, node1,node2;
    map<char, int>myMap;

    scanf("%d%d",&node, &edge);

    for(int i = 0; i<edge; i++)
    {
//        scanf("%d%d%d", &node1, &node2, &cost);
//        g[node1].push_back(make_pair(node2,cost));

        //printf("%d %d\n", g[node1][i].first, g[node1][i].second);
    }

    for(int i = 1; i<node; i++)
    {
        int sz = g[i].size();
        for(int j = 0; j<sz; j++)
        {
            printf("%d %d %d\n", i, g[i][j].first, g[i][j].second);
        }
    }

    int source,  goal;
    scanf("%d%d", &source, &goal);
    bfs(g, source, goal);
    int destination;
    scanf("%d", &destination);
    showPath(destination);

    //printf("\n %d %d %d %d", parent[1], parent[2],parent[3],parent[4]);
    return 0;
}

/*
4 4
1 2 5
1 3 2
2 3 1
3 4 3
1
4

*/
