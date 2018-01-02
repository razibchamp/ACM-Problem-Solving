
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
    double m1,m2,m3,s,area;

    while(scanf("%lf%lf%lf", &m1, &m2, &m3) == 3)
    {
        s = (m1+m2+m3)/ 2;

//        if(m1 <= 0 || m2 <= 0 || m3 <= 0 )
//        {
//            printf("-1.000\n"); continue;
//        }

//        if(sqrtt <= 0)
//            printf("-1.000\n");

        area = ( (double) 4 / 3 ) *  sqrt( s * (s - m1) * (s - m2) * (s - m3) ) ;

        if(area > 0)
            printf("%.3lf\n", area);
        else
            printf("-1.000\n");
    }
    return 0;
}
