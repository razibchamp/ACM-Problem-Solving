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

const int sz = 1e7;
int sqr[sz];
int digit;

void findSqr()
{
    for(int i = 0; i < sz; i++)
    {
        sqr[i] = i*i;
    }
}

int power(int num, int n)
{
    int nn = num;
    for(int i= 1; i < n; i++)
        nn *= num;

    return nn;
}
int main()
{
    findSqr();
    while(scanf("%d", &digit) == 1)
    {
        int p = power(10, (digit/2) );
        int d = power(10 , digit);
        for( int i = 0; i < d; i++)
        {
            int n1 = i%p;
            int n2 = i/p;

            if(sqr[n1+n2] == i )
                printf("%0*d\n", digit, i);
        }
    }
    return 0;
}
