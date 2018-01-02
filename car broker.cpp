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
#define M 1000000

int main()
{
    //r("in.txt");
    //w("w.txt");

    int t;
    int caseNo= 1;
    scanf("%d", &t);
    while(caseNo <=t)
    {
        long long a=0,b=0;
        char str[100];
        int i = 0;
        scanf("%s%s%s%lld", str, str, str, &a);
        scanf("%s%s%s%lld", str, str, str, &b);
        long long res = abs(b - a);
        if(caseNo == 1)
        {
            if( b - a > 0)
            {
                printf("Shawkat gains: Tk. %lld", res);
            }
            else
            {
                printf("Shawkat loses: Tk. %lld" , res);
            }
        }
        else
        {
            if( b - a > 0)
            {
                printf("\n\nShawkat gains: Tk. %lld", res);
            }
            else
            {
                printf("\n\nShawkat loses: Tk. %lld" , res);
            }
        }
       caseNo++;
    }
    printf("\n");
    return 0;
}
