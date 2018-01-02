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

long long BigMod(long long a, long long p, long long m) {
	long long res = 1;
	if (p == 0) return 1;
	if (p == 1) return a%m;
	if (p & 1) res = (a*BigMod(a, p - 1, m))%m;
	else {
		res = BigMod(a, p / 2, m);
		res= res* res;
		res = (res%m);
	}
	return res;
}
int main()
{
    //ios::sync_with_stdio(false);

    long long b,p,m;
    while(scanf("%lld%lld%lld", &b, &p, &m) == 3)
    {
        printf("%lld\n", BigMod(b,p,m));
    }
    return 0;
}
