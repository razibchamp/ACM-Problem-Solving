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

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
#define gcd(a,b) int gcd(int a, int b) return b == 0 ? a : gcd(b, a%b);
int main()
{
    //ios::sync_with_stdio(false);

    int a,b;

    while(scanf("%d%d", &a, &b) == 2)
    {
        int p1,p2, sum1 = 1, sum2 = 1;
        if(a == 0 && b == 0)
            break;
        for(int i = 0; i<a; i++)
        {
            scanf("%d", &p1);
            sum1 *= p1;
        }

        for(int i = 0; i<b; i++)
        {
            scanf("%d", &p2);
            sum2 *= p2;
        }

        if(sum1 == sum2)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}


