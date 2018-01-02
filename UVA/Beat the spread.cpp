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
    int t, s, d, a, b;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &s,&d);

        b = (s-d)/2;
        a = s-b;
        if( (s+d)%2 == 0 && (s-d)%2 == 0)
        {
            if(a >= 0 && b >=0 )
            {
                printf("%d %d\n", a,b);
            }
            else
                printf("impossible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
