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

int primeList[M];

void initPrime()
{
    int sz = M;
    int sqrtN = int ( sqrt( (double) sz));
    for(int i = 4; i <= sz; i+=2)
    {
        primeList[i] = 1;
    }
    for(int i = 3; i <= sqrtN; i += 2)
    {
        if(primeList[i] == 0)
        {
            for(int j = i * i; j <= sz; j+= i + i)
            {
                primeList[j] = 1;
            }
        }
    }
}
int main()
{
    //r("aa.txt");
    initPrime();

    int n;

    while(scanf("%d", &n) == 1)
    {
        int revN = 0;
        int m = n;
        while(n != 0)
        {
            revN = revN*10 + n%10;
            n /= 10;
        }

        if(primeList[m] == 1)
            printf("%d is not prime.\n", m);
        else if( m == revN )
            printf("%d is prime.\n", m);
        else if(primeList[m] == 0 && primeList[revN] == 1)
            printf("%d is prime.\n", m);
        else if(primeList[m] == 0 && primeList[revN] == 0)
            printf("%d is emirp.\n", m);
    }
    return 0;
}
