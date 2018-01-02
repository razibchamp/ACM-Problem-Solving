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
        int flag1 = 0,flag2 = 0, i,a, ctr= 0;

        for(i = 0; i<n; i++)
        {
            scanf("%d", &a);

            if(a == 1)
            {
                flag1 = 1;
                ctr++;
                if(flag2 == 1)
                {
                    ctr++;
                }
                flag2 = 0;
            }
            else if(a == 0 && flag1 == 1)
            {
                flag2++;
            }

        }
        printf("%d\n", ctr);
    }
    return 0;
}
