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

    long long n,k;

    while(scanf("%I64d%I64d", &n, &k) == 2)
    {
        long long l = n/2;
        if(n%2 == 0)
        {
            if(k <= n/2 )
                printf("%I64d\n", k+(k-1));
            else
            {
                printf("%I64d\n", (k - l)*2);
            }
        }
        else
        {
            if(k <= l+1)
                printf("%I64d\n", k+(k-1));
            else
                printf("%I64d\n", (k - l -1)*2);
        }
    }

    return 0;
}
