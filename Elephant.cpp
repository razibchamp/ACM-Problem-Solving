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
int main()
{
    //ios::sync_with_stdio(false);

    int n, ctr = 0, sum = 0;

    scanf("%d", &n);
    int a = 1, b =2 , c =3 , d =4, e = 5;
    while(sum != n)
    {
        if(sum + e <= n) sum += e;
        else if( sum + d <= n) sum += d;
        else if( sum + c <= n) sum += c;
        else if( sum + b <= n) sum += b;
        else if( sum + a <= n) sum += a;
        ctr++;
    }

    printf("%d\n", ctr);
    return 0;
}


