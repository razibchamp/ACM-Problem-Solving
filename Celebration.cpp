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
    int t,cn=1;
    scanf("%d", &t);
    while(cn <= t)
    {
        long long n,k, money, each;
        long long sum_n = 0;
        scanf("%lld", &n);
        for(long long i = 0; i<n; i++)
        {
            scanf("%lld", &k);
            sum_n += k;
        }
        scanf("%lld%lld", &money, &each);
        sum_n *= each;

        if(money < sum_n)  printf("Case %d: %lld\n", cn, abs(money-sum_n));
        else printf("Case %d: 0\n", cn);
        cn++;
    }
    return 0;
}
