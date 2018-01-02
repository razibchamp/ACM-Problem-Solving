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
    //w("w.txt");
    int t,x,y,z;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d", &x, &y, &z);
        double w = (double) (x+y)/3; // work done by each in hour
        double ex =0;
        if(x >= w)
        {
            ex = x - w; // extra work done by x in hour
        }
        int moneyOfA = floor( ((z * ex ) / w) + 1e-8 ) ;
        printf("%d\n", moneyOfA);
    }
    return 0;
}
