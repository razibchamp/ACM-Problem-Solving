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

    int x=0,y=0,aa=0,b=0;

    while(scanf("%d%d%d%d", &x, &y, &aa, &b) == 4)
    {
        int i,j,a[100000]={-1}, n = 0, k = 0;
        if(x <= b )
        {
            printf("0\n"); continue;
        }
        for( i = aa; i <= x; i++)
        {
            for(j = b; j <= y; j++)
            {
                if(i > j)
                {
                    a[k++] = i, a[k++] = j;
                    n++;
                }
            }
        }

        printf("%d\n", n);

        for(i = 0; i<k;)
        {
            printf("%d", a[i++]);
            printf(" %d\n", a[i++]);
        }
    }
    return 0;
}
