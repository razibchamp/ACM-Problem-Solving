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
    int t,n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int num = 0, ctr = 0, m = 0, nn[105];
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &nn[i]);
            if(nn[i] > num)
                num = nn[i];
        }

        int res = 100 - num;

        for(int i = 0; i<n; i++)
        {
            if(nn[i] + res >= 50)
                ctr++;
        }

        printf("%d\n", ctr);
    }
    return 0;
}
