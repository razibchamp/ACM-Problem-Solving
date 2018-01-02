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

long long seqValue(long long n)
{
    long long ct = 0;
    while(n >= 1)
    {
        if(n%2 == 0)
        {
            ct++; n /= 2;
        }
        else
        {
            n = (3*n) + 1; ct++;
        }

        if(n == 1)
            break;
        //prlong longf("%lld\n",n);
    }
    return ct;

}
int main()
{
    //r("in.txt");
    long long L,H,V, vLow , MaxSeq;

    while(scanf("%lld%lld", &L, &H) == 2)
    {
        if(L > H)
        {
            long long temp = H;
            H = L;
            L = temp;
        }
        vLow = L, MaxSeq = 0;
        if(L == 0 && H == 0)
            break;

        for(long long i = L; i<=H; i++)
        {
            long long value = seqValue(i);
            long long temp = i;
            if(value > MaxSeq)
            {
                MaxSeq = value;
                vLow = i;
            }
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", L, H, vLow, MaxSeq);
    }
    return 0;
}
