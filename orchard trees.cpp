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
    double ax, ay, bx,by, cx, cy;

    while(scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy) == 6)
    {
        if(ax == 0 && ay == 0 && bx == 0 && by == 0 && cx == 0 && cy == 0)
            break;

        double trees =  fabs(0.5 * ((ax *( by - cy ) ) + (bx * (cy - ay)) + (cx * (ay - by)) ));


        printf("%4.0lf\n", trees);
    }
    return 0;
}
