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
    //w("in.txt");

    long long t,a;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &a);
        long long i;
        if(a == 0)
        {

            printf("0 0");
            if(t)
                printf("\n");
            continue;
        }
        for(i = 0; i<a; i++)
        {
            printf("%lld ", i);
        }
        printf("%lld", i);
        if(t)
            printf("\n");
    }
    return 0;
}
