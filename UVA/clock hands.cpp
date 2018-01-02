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

double hrA,hr, minA,mint;
char c;
int main()
{
    while(scanf("%lf%c%lf",&hr,&c,&mint) == 3)
    {
        if(hr == 0 && mint == 00)
            break;
        hrA = hr*30+(mint/60)*30;
        minA = mint*6;
        double angle = fabs(  hrA - minA);
        //printf("%lf",angle);
        if(angle > 180)
            angle = 360 - angle;

        printf("%.3lf\n", angle);
    }
    return 0;
}
