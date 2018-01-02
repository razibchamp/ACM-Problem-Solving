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

int main()
{
    //r("in.txt");
    int n,b,h,w;

    while(scanf("%d%d%d%d", &n, &b, &h, &w) == 4)
    {
        int price, tot_cost[20],tc=0, select = -1;
        while(h--)
        {
            int beds[1005];
            int i = 0;
            scanf("%d", &price);
            for(i = 0; i<w; i++)
            {
                scanf("%d", &beds[i]);
                if(beds[i] >= n)
                    select = beds[i];
            }

            if(select >= n )
                tot_cost[tc++] = n*price;
        }

        if(select < 0)
        {
            printf("stay home\n"); continue;
        }

        sort(tot_cost, tot_cost + tc);

        if(tot_cost[0] <= b)
        {
            printf("%d\n", tot_cost[0]);
        }
        else
            printf("stay home\n");
    }
    return 0;
}
