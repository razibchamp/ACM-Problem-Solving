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
    int t,n,m;


    scanf("%d", &t);
    while(t--)
    {
        long long sum[102] ={0};
        scanf("%d%d", &n, &m);
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                long long s;
                scanf("%lld", &s);
                sum[j] += s;
            }
        }
        sort(sum, sum+n);
        printf("%lld\n", sum[n-1]);
    }
    return 0;
}
