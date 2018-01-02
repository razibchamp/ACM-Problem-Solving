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
    //ios::sync_with_stdio(false);

    int n, x[5], y[5], area = 0;

    while(scanf("%d", &n) == 1)
    {
        int t = n;
        area = 0;

        for(int i = 0; i < t; i++)
        {
            scanf("%d%d", &x[i], &y[i]);
        }

        if(n == 1)
        {
            printf("-1\n");
        }
        else if(n == 2)
        {
            if(x[0] == x[1] && y[0] != y[1] || x[0] != x[1] && y[0] == y[1])
                printf("-1\n");
            else
             {
                 area = abs(x[0] - x[1]) * abs(y[0] - y[1]);
                 printf("%d\n", area);
             }
        }
        else if(n == 3)
        {
            area = abs(x[0]-x[1]) * abs(y[0]-y[1]);
            if(area == 0)
            {
                area = abs(x[0] - x[2]) * abs(y[0] - y[2]);
                if(area == 0)
                    area = abs(x[1] - x[2]) * abs(y[1] - y[2]);
            }
            if(area > 0)
                printf("%d\n",area );
            else
                printf("-1\n");
        }
        else
        {
            area = abs(x[0] - x[1]) * abs(y[0] - y[1]);
            if(area == 0)
            {
                area = abs(x[0] - x[2]) * abs(y[0] - y[2]);
                if(area == 0)
                    area = abs(x[0] - x[3]) * abs(y[0]- y[3]);
            }

            if(area > 0)
                printf("%d\n", area);
            else
                printf("-1\n");
        }
    }

    return 0;
}
