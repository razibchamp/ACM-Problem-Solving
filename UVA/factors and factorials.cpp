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

const int sz = 10000;
const int sz1 = 1e7;

int primes[sz1];
int facts[102];
void initPrimes()
{
    int s = (int) sqrt( (double) 10000);

    for(int i = 3; i<=s; i+= 2)
    {
        if(primes[i] == 0)
        {
            for(int j = i*i; j<=sz; j += i+i)
            {
                primes[j] = 1;
            }
        }
    }
}

void fact(int n)
{
    if(n >= 2)
    facts[2]++;
    for(int i = 3; i<=n; i++)
    {
        if(i%2 == 0)
        {
            int k = i;
            while(k%2 == 0)
            {
                facts[2]++; k /= 2;
            }
            for(int j = 3; j<=k; j+= 2)
            {
                if(primes[j] == 0)
                {
                    while( k%j == 0)
                    {
                        facts[j]++; k /= j;
                    }
                }
            }
        }
        else if(primes[i] == 0)
            facts[i]++;
        else
        {
            int k = i;
            for(int j = 3; j<=k; j+= 2)
            {
                if(primes[j] == 0)
                {
                    while( k%j == 0)
                    {
                        facts[j]++; k /= j;
                    }
                }
            }
        }
    }
}
int main()
{
    initPrimes();

    int N;
    while(scanf("%d", &N) == 1)
    {
        if(N == 0) break;
        fact(N);
        printf("%3d! =", N);

        printf("%3d", facts[2]);
        int c = 1;
        for(int i = 3; i<=N; i+= 2)
        {
            if(primes[i] == 0)
            {   if(c == 15)
                {
                    printf("\n      ");
                    c = 0;
                }
                printf("%3d", facts[i]); c++;
            }

        }
        printf("\n");
        for(int i = 0; i <= N; i++)
            facts[i] = 0;
    }
    return 0;
}
