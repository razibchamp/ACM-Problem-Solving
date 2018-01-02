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

double H,U,D,F;
int Day = 0;
int main()
{
    while(scanf("%lf%lf%lf%lf",&H,&U,&D,&F))
    {
        if(H == 0)
            break;
        double fatigue = (F/100)*U;
        double hac = U; // height after climbing
        double has = hac - D; // height after sliding
        while(true)
        {
            Day++;
            if( hac > H)
            {
                printf("success on day %d\n",Day);
                Day = 0;
                break;
            }
            else if( hac < 0 || has < 0)
            {
                printf("failure on day %d\n", Day);
                Day = 0;
                break;
            }

            if( U-fatigue < 0)
            {
                U = 0;
                hac = has + U;
                has = hac - D;
            }
            else
            {
                U = U - fatigue;
                hac = has + U;
                has = hac - D;
            }
        }

    }
    return 0;
}
