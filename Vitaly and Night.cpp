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

    int n,m,a,b;

    while(scanf("%d%d", &n, &m) == 2)
    {
        int i, j, ctr = 0;

        for(i = 0; i<n; i++)
        {
            for(j = 0; j<m; j++)
            {
                scanf("%d%d", &a, &b);
                if(a == 1 || b == 1)
                    ctr++;
            }

        }
        printf("%d\n", ctr);
    }
    return 0;
}
