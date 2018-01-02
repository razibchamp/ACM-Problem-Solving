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
    //r("aa.txt");
    long long n;

    while(scanf("%lld", &n) == 1)
    {
        if(n == 0)
            break;

        long long num = sqrt((double) n );
        if( num*num == n)
            printf("yes\n");
        else
            printf("no\n");

    }
    return 0;
}
