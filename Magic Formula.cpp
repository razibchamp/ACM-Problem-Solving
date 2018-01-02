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

    int a,b,c,d,l;

    while(scanf("%d%d%d%d%d", &a, &b, &c, &d, &l) == 5)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
            break;
        int ctr = 0;
        for(int i = 0; i<=l; i++)
        {
            int res = (a*i*i) + (b*i) + c;
            if(res%d == 0)
                ctr++;
        }
        printf("%d\n", ctr );
    }
    return 0;
}


