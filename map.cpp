#include <vector>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
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

map<string,int>mymap;
vi G[1000];

void PrintPath(int d, int p[])
{

    map<string,int>::iterator it1;
    map<string,int>::iterator it2;
    //printf("PRINT\n");
    for(it1 = mymap.begin(); it1 != mymap.end(); it1++)
    {
        if(it1->second == d)
            break;
    }
    for(it2 = mymap.begin(); it2 != mymap.end(); it2++)
    {
        if(it2->second == p[d])
            break;
    }


    //printf("%d %d", d, p[p[d]])
    if(p[d] != -1)
    {
        PrintPath(p[d], p);
    }
    else
    {
        return;
    }

    cout<< it2->first << " "<< it1->first<<endl;
}

void bfs(int src, int d)
{
    queue<int>Q;
    int parent[1000], dis[1000], visited[1000],flag = 0;
    for(int i =  0; i<1000; i++)
    {
        visited[i] = -1, dis[i] = 0;
    }
    Q.push(src);
    parent[src] = -1;
    visited[src] = 0;
    dis[src] = 0;
    while(!Q.empty())
    {
        int u = Q.front() , len = G[u].size();
        //cout<< len <<endl;
        for(int i = 0; i<len; i++)
        {
            int v = G[u][i];
            if(v == d) flag =  1;
            //printf("VIS: %d %d\n",visited[v],v);
            if(visited[v] == -1)
            {
                visited[v] = 0;
                parent[v] = u;
                //printf("PA: %d %d\n", parent[v], u);
                dis[v] = dis[u] + 1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    if(flag)
    {
        PrintPath(d, parent);
        printf("\n");
    }
    else
        printf("No route\n\n");
}
int main()
{
    //ios::sync_with_stdio(false);

    int edge,assign=0;
    string sourc, des;
    while(cin>>edge)
    {
        mymap.clear();
        for(int i = 0; i<1000; i++)
            G[i].clear();
        assign = 0;
        for(int i=0;i<edge;i++)
        {
            char s1[3],s2[3];
            cin>>s1>>s2;

            if(mymap.find(s1)==mymap.end())
            {
                //printf("Mapping %s with %d\n",s1,assign);
                mymap[s1]=assign++;
            }

            if(mymap.find(s2)==mymap.end())
            {
                //printf("Mapping %s with %d\n",s2,assign);
                mymap[s2]=assign++;
            }
                int u=mymap[s1];
                int v=mymap[s2];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        cin>>sourc >> des;
        bfs(mymap.find(sourc)->second, mymap.find(des)->second);
    }

    return 0;
}


