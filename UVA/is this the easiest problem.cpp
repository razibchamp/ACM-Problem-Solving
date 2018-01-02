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


int main()
{

    long long T, a, b, c, caseNo = 1;
    scanf("%d", &T);

    while(caseNo <= T)
    {
        scanf("%lld%lld%lld", &a,&b,&c);
        if( a>0 && b>0 &&c >0 && a+b > c && b+c > a && c+a > b)
        {
            if(a==b && b==c)
                printf("Case %lld: Equilateral\n", caseNo++);
            else if(a!=b && b!=c && a!=c)
                printf("Case %lld: Scalene\n",caseNo++);
            else if( a==b && a!=c || b==c && b!=a || c==a && c!=b)
                printf("Case %lld: Isosceles\n", caseNo++);
        }
        else
        {
            printf("Case %lld: Invalid\n", caseNo++);
        }
    }
    return 0;
}
