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
    while(scanf("%d", &n))
    {
        if(n==0)
            break;
        if( n >= 101 )
            printf("f91(%d) = %d\n", n,n-10);
        else
            printf("f91(%d) = %d\n", n,91);
    }
    return 0;
}
