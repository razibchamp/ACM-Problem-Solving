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

long long fibo[10010];


    long long a,b,c,d,e,f,n;
    int t;

long long fn(long long n)
 {
    if(n == 0) return a;
    if(n == 1) return b;
    if(n == 2) return c;
    if(n == 3) return d;
    if(n == 4) return e;
    if(n == 5) return f;
    if(fibo[n] == -1)
    {
        fibo[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % 10000007;
        return fibo[n];
    }
    else
    {
        return fibo[n];
    }
 }
int main()
{
    //ios::sync_with_stdio(false);

    while(scanf("%d", &t) == 1)
    {
        int cn = 1;


        while(cn <= t)
        {
            int k = 0;
            for(k; k < 10010; k++)
            {
                fibo[k] = -1;
            }

            scanf("%lld%lld%lld%lld%lld%lld%lld", &a, &b, &c , &d, &e, &f, &n);

            printf("Case %d: %lld\n", cn++, fn(n) % 10000007);
        }
    }
    return 0;
}
