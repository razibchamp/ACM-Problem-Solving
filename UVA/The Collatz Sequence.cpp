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

long long seqValue(long long n, long long h)
{
    long long ct = 0;
    while(n >= 1 )
    {
        if(n%2 == 0)
        {
            ct++; n /= 2;
        }
        else
        {
            n = (3*n) + 1; ct++;
        }

        if(n == 1)
        {
            ct++;
            break;
        }
        else if(n > h) break;
    }
    return ct;
}
int main()
{
    long long L,H,terms, cn = 1;

    while(scanf("%lld%lld", &L, &H) == 2)
    {

        terms = 0;
        if(L < 0 && H < 0)
            break;
        terms = seqValue(L, H);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", cn++, L, H, terms);

    }
    return 0;
}
