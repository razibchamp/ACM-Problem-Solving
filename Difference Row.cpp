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
    int n;

    while(scanf("%d", &n) == 1)
    {
        int a[110],i;

        for(i = 0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);

        a[0] += a[n-1];
        a[n-1] = a[0] - a[n-1];
        a[0] -= a[n-1];

        for(i = 0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
