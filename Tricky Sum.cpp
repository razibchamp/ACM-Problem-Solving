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
    int t;
    while(scanf("%d", &t) == 1)
    {
        while(t--)
        {
            long long n, res;

            scanf("%I64d", &n);

            res = n*(n+1)/2;

            for(long long i = 1; i <= n; i *= 2)
                res -= 2*i;

            printf("%I64d\n", res);
        }

    }
    return 0;
}
