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


    long long n,k, lastOdd, fodd = 1, fev = 2;

    scanf("%I64d%I64d", &n, &k);

    if(n%2 != 0)
    {
        lastOdd = n/2 + 1;
    }
    else
        lastOdd = n/2;

    if(k <= lastOdd)
    {
        printf("%I64d", (k+ k - 1));
    }
    else
    {
        printf("%I64d", (k-lastOdd) * 2);
    }


    return 0;
}
