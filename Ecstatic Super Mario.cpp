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

    int t,n,a,b,cn = 1;

    scanf("%d", &t);
    while(cn <= t)
    {
        int len = 0;
        scanf("%d", &n);
        for(int i = 0; i<n; i++)
        {
            scanf("%d%d", &a, &b);
            int m = abs(a-b);
            if(m > len)
                len = m;
        }

       printf("Case %d: %d\n", cn++, len);
    }
    return 0;
}
