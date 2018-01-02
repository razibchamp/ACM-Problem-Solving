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
    int a,b;

    while(scanf("%d%d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            break;

        int ctr = 0;

        if(a == 0) a++;
        int n1 = (int) sqrt( (double) a);

        if(n1 * n1 < a)
        {
            n1++;
        }

        while(n1*n1 <= b)
        {
            ctr++;
            n1++;
        }
        printf("%d\n", ctr);
    }

    return 0;
}
