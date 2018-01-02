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

int primes[100000];

void init()
{
    primes[1] = -1;
    primes[2] = 0;
    int sqt = (int) sqrt((double) 100000);

    for(int i = 4; i<=100000; i+=2)
        primes[i] = 1;
    for(int i = 3; i <= sqt; i+=2)
    {
        if(primes[i] == 0)
        {
            for(int j = i*i; j<=100000; j += i+i)
            {
                primes[j] = 1;
            }
        }
    }
}
int main()
{
    //ios::sync_with_stdio(false);
    init();
    int t,l,r,cn = 1;
    scanf("%d", &t);
        while(cn <= t)
        {
            int ctr = 0;
            scanf("%d%d", &l, &r);
            for(int i = l; i <= r; i++)
            {
                if(primes[i] == 0)
                    ctr++;
            }
            printf("Case %d: There are %d numbers between %d and %d.\n", cn,ctr,l,r);
            cn++;
        }



    return 0;
}
