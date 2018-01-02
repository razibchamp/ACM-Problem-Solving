#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>

#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstring>
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
#define pi 2*acos(0.0)
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};
int main()
{
    //w("w.txt");

    int n, a,b,c;

    scanf("%d%d%d%d", &n, &a, &b, &c);

    int k, i = 0;

    while(true)
    {
        if((n+i)%4 == 0)
        {
            k = i;
            break;
        }
        i++;


    }

    if(k == 0)
        printf("0\n");
    else if(k == 1)
    {
        printf("%lld", (long long)a*k);
    }
    else if(k == 2)
    {
        if((long long) a*k < b)
        {
            printf("%I64d\n", (long long) a*k);
        }
        else
            printf("%d\n", b);
    }
    else if(k == 3)
    {
        long long val = (long long)a*k;

        if(val < c && val < (long long)a+b)
            printf("%lld\n", val);
        else if(c < (long long) a+b)
        {
            val = c;
            printf("%I64d\n", val);
        }
        else
        {
            val = (long long) a+b;
            printf("%I64d\n", val);
        }

    }

    return 0;
}
