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

int main(){
//    r("in.txt");
//    w("w.txt");

    int t, cn = 1;
    long long n, m;
    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%lld%lld", &n, &m);
        printf("Case %d: %lld\n", cn++, (n*m)/2);
    }

	return 0;
}

/*
2
5 3
1 2 3 4 5
P 0 1
S 1
R
4 2
2 7 8 1
M 10
D 5
*/
