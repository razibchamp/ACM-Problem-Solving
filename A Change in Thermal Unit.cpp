#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iostream>

using namespace std;

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>


int main()
{
    //ios::sync_with_stdio(false);

    int t,c,d,cn=1;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &c, &d);

        double cc = ( ( (double) 9/5)*c ) + 32;
        double newTemp = d+cc;
        newTemp = ( (double) 5/9)*(newTemp-32);

        printf("Case %d: %.2lf\n" , cn++, (double) newTemp);
    }
    return 0;
}


