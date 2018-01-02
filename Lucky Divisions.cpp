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

int lucky[1000+10]={0};

int isLucky(int n);
void findLuckyNumbers()
{
    for(int i = 1; i<= 1001; i++)
    {
        if(isLucky(i))
        {
            lucky[i] = 1;
        }
    }
}

int isLucky(int n)
{
    while(n != 0)
    {

        if(n%10 != 4)
        {
            if(n%10 != 7)
                return 0;
        }
        n /= 10;
    }

    return 1;
}

int main()
{
    //ios::sync_with_stdio(false);

    findLuckyNumbers();

    int n;

    while(scanf("%d", &n) == 1)
    {
        if(lucky[n] == 1)
            printf("YES\n");
        else if(true)
        {
            int i, flag = 0;
            for(i = 4; i<=n; i++)
            {
                if(lucky[i] == 1 && n%i == 0)
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("NO\n");
        }

    }

    return 0;
}
