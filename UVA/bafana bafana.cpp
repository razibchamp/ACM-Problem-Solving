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
    //r("in.txt");
    int t,n,k,p;

    scanf("%d", &t);
    int cn = 1;
    while(cn <= t)
    {
        scanf("%d%d%d", &n, &k, &p);

        int res = (k+p);

        printf("Case %d: %d\n", cn++, ((res-1)%n)+1 );

    }
    return 0;
}
