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
    int a,b,t,n,cn = 1;

    scanf("%d", &t);


    while(cn <= t)
    {
        int k; int sum = 0, s = 0;
        scanf("%d", &k);
        int i = 0;
        while(i < k-1 )
        {
            scanf("%d%d", &a,&b);

            sum = abs(sum - b);
            sum += a;
            if(s < sum)
                s = sum;
            i++;
        }

        printf("Case %d: %d\n", cn,s);
        cn++;
    }

    return 0;
}
