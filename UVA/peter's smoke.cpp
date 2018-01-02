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
    int n,k;

    while(scanf("%d%d", &n,&k) == 2)
    {
        int tot_cig = n, res = n, mod = 0;
        while(true)
        {

            mod = res%k;
            res = res/k;
            tot_cig += res;
            res += mod;

            if(res < k)
                break;
        }
        printf("%d\n", tot_cig);
    }
    return 0;
}
