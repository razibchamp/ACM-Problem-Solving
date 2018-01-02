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

    long long t,a,b,c;

    while(true)
    {
        scanf("%lld%lld%lld",&a, &b, &c);
        if(a== 0 && b == 0 && c == 0)
            break;

        int resc = sqrt((double)(a*a)+(b*b));
        int resb = sqrt((double)(a*a)+(c*c));
        int resa = sqrt((double)(c*c)+(b*b));
        if(resc == c)
            printf("right\n");
        else if(resb == b)
            printf("right\n");
        else if(resa == a)
            printf("right\n");
        else
            printf("wrong\n");

    }


    return 0;
}


