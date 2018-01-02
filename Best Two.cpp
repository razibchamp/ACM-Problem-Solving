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
        for(int j = 0; j<n; j++)
        {
            int i, ctr = 0;
            double q[3];
            for(i = 0; i<3; i++)
            {
                scanf("%lf", &q[i]);
                if(q[i] < 10)
                    ctr++;
            }
            if(ctr > 1)
                printf("Failed\n");
            else
            {
                sort(q, q+3);
                printf("%0.2lf\n", (q[1]+q[2])/2 );
            }
        }
    }
    return 0;
}
