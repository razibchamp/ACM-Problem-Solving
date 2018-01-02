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
int memo[202];


int main()
{
    //ios::sync_with_stdio(false);

    int n, res = 0;

    while(scanf("%d", &n) == 1)
    {
        res = 0, num1 = n;
        if(memo[n] != 0)
        {
            printf("%d\n", memo[n]);
            continue;
        }

        res = n;
        while(num1 >= 3)
        {
            num1 /= 3

        }
    }

    return 0;
}
