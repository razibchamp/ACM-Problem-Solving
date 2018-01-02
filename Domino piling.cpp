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

    int n,m;

    while(scanf("%d%d", &n , &m) == 2)
    {
        int res = n*m;

        if( res % 2 == 0)
            printf("%d\n", res/2);
        else
            printf("%d\n", (res-1)/2);
    }
    return 0;
}
