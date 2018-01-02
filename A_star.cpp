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
map<char, int>myMap;
map<char, int>::iterator it;
//struct cmp
//{
//
//    bool operator()(pii a, pii b)
//    {
//        return a.second < b.second;
//    }
//};

void showPath(int node)
{
    int p = node;
    if(parent[node] == -1)
    {
        for(it=myMap.begin(); it!=myMap.end(); it++)
        {
            if(it->second == node)
            {
                printf("%c", it->first);
                break;
            }
        }

        return;
    }

    showPath(parent[node]);

    for(it=myMap.begin(); it!=myMap.end(); it++)
        {
            if(it->second == p)
            {
                printf("%c", it->first);
                break;
            }
        }
}


void bfs(vector<pii>g[100], int source, int goal)
{

    priority_queue<pii>q;
    parent[source] = -1;
    q.push(make_pair(source, -1*(0+hn[source])));
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
            printf("Goal\n");
            showPath(goal);
            return;
        }


        for(int i = 0; i<sz; i++)
        {
            int currentNode = g[u.first][i].first;
            int currentNodeCost = (g[u.first][i].second + ((-1*u.second)-hn[u.first]));
            int costGnHn = -1*(currentNodeCost  + hn[currentNode]);
            if(explored[currentNode] != 1)
            {
                parent[currentNode] = u.first;
                printf("Parent: %d CurrNode: %d Cost: %d\n", u.first, currentNode, -1*costGnHn);
            }

            q.push(make_pair(currentNode, costGnHn));

            printf("U:%d V:%d\n ", u.first, currentNode);
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



int main()
{

    int node, edge, cost, nodeNum = 0, hnCost;
    char  node1,node2;

    scanf("%d%d",&node, &edge);
    getchar();
    //graph input




    for(int i = 0; i<edge; i++)
    {
        //printf("node\n");
        printf("i:%d\n", i);
        scanf("%c %c%d", &node1, &node2, &cost);
        getchar();
        //printf("%c %c %d\n", node1, node2, cost);
        int tmpNode1, tmpNode2;
        if(myMap[node1] == 0)
        {
            nodeNum++;
            myMap[node1] = nodeNum;
            tmpNode1 = nodeNum;

        }

        if(myMap[node2] == 0)
        {
            nodeNum++;
            myMap[node2] = nodeNum;
            tmpNode2 = nodeNum;

        }
//        scanf("%d%d%d", &node1, &node2, &cost);
        printf("%d %d\n", myMap[node1], myMap[node2]);
        g[myMap[node1]].push_back(make_pair(myMap[node2],cost));

        //printf("%d %d\n", g[node1][i].first, g[node1][i].second);
    }


    for(int i = 0; i<node; i++)
    {

       //printf("hnode\n");
       printf("i:%d\n", i);
        char hnode;
        scanf("%c%d", &hnode, &cost);
        getchar();
        hn[myMap[hnode]] = cost;
    }
//    for(int i = 1; i<node; i++)
//    {
//        int sz = g[i].size();
//        for(int j = 0; j<sz; j++)
//        {
//            printf("%d %d %d\n", i, g[i][j].first, g[i][j].second);
//        }
//    }

    char source,  goal;
    printf("goal\n");
    scanf("%c%c", &source, &goal);
    bfs(g, myMap[source], myMap[goal]);
//    int destination;
//    scanf("%d", &destination);
//    showPath(destination);

    //printf("\n %d %d %d %d", parent[1], parent[2],parent[3],parent[4]);
    return 0;
}

/*
5 7
S A 1
S B 4
A B 2
A C 5
A G 12
B C 2
C G 3
S 7
A 6
B 2
C 1
G 0
S G

*/
