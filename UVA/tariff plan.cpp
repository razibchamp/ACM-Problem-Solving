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
    int t,n,d, cn = 1;
    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d", &n);
        int p1c = 0, p2c = 0;
        while(n--)
        {
            scanf("%d", &d);
            d = d+1;
            p1c += (d/30)*10;
            if(d%30 > 0)
                p1c += 10;
            p2c += (d/60)*15;
            if(d%60 > 0)
                p2c += 15;

        }

        if(p1c < p2c )
        {
            printf("Case %d: Mile %d\n", cn++, p1c );
        }
        else if( p2c < p1c)
        {
            printf("Case %d: Juice %d\n", cn++, p2c);
        }
        else if(p1c == p2c)
        {
            printf("Case %d: Mile Juice %d\n", cn++,p1c);
        }
    }
    return 0;
}
