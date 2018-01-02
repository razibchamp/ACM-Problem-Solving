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
    int t,n, in, w, i =0, cn = 1;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d", &n);

        int hj = 0, lj = 0,res;
        for(i = 0; i<n; i++)
        {
            scanf("%d", &w);

            if(i > 0)
            {
                if(w > res)
                    hj++;
                else if( w < res)
                    lj++;
            }

            res = w;
        }
        printf("Case %d: %d %d\n",cn,hj,lj);
        cn++;
    }
    return 0;
}
