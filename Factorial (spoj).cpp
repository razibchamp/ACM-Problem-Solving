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
int main()
{
    //ios::sync_with_stdio(false);

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,ctr = 0;
        long long i;
        scanf("%d", &n);
        for(i = 5; n/i >= 1; i *=5)
        {
            ctr += n/i;
        }
        printf("%d\n", ctr);

    }

    return 0;
}


