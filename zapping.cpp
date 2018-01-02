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

    //w("w.txt");
    int a,b;

    while(scanf("%d%d", &a, &b) == 2)
    {
        if(a == -1 && b == -1)
            break;

        int res = abs(a-b);
        if(abs(a-b) >= 50)
            res = 100 - res;
        printf("%d\n", res);
    }
    return 0;
}


