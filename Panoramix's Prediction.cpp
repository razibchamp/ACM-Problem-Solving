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

const int sz = 1e7;
int primes[sz];

void init_primes()
{
    for(int i = 4; i<sz; i+=2)
    {
        primes[i] = 1;
    }

    int sqert = (int)   sqrt((double) sz);

    for(int i = 3; i<= sqert; i+=2)
    {
        if(primes[i] == 0)
        {
            for(int j = i*i; j<= sz; j+=i+i)
            {
                primes[j] = 1;
            }
        }
    }
}
int main()
{
    //ios::sync_with_stdio(false);

    init_primes();



    int a,b;

    while(scanf("%d%d", &a, &b) == 2)
    {
        int i = a+1;
        for(; i<=sz; i++)
        {
            if(primes[i] == 0)
                break;
        }
        if(i == b)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}


