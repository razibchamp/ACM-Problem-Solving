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
    int n;
    while(scanf("%d", &n) == 1)
    {
        int i;
        for( i = 1; i <= n; i *= 2)
        {
            if( i * 2 > n)
                break;
        }

        printf("%d\n", 1 + n - i);
    }
    return 0;
}
