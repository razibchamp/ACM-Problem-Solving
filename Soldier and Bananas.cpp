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

    int k,n,w,b;

    while(scanf("%d%d%d", &k, &n, &w) == 3)
    {
        b = 0;
        int cost = k * (( (w*w)+w )/2 );
        if(cost > n)
            b = abs(cost - n);

        if(b)
            printf("%d\n", b);
        else
            printf("0\n");
    }
    return 0;
}
