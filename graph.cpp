#include <vector>
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

#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define MAX 100000
vector <int>edges[MAX];
vector <int>cost [MAX];
int main()
{
    r("in.txt");
    int N,E, i;

    scanf("%d%d", &N, &E);

    for(i = 1; i<=E; i++)
    {
        int x,y;
        scanf("%d%d", &x, &y);

        edges[x].push_back(y);
        cost[x].push_back(1);
    }

    int in = 0;
    for(i = 1; i <= N; i++)
    {
        for(int j = 0; j < edges[i].size(); j++)
        {
            if(edges[i][j] == 6)
            {
                in++;
            }
        }
    }


    printf("In-degree %d\n", in);

    printf("Out-degree %d\n", edges[6].size() );
    return 0;
}
