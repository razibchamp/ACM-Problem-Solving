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
        if(n%2 == 0)
            printf("%d %d\n", 8,(n-8));
        else
            printf("%d %d\n", 9, (n-9));
    }
    return 0;
}
