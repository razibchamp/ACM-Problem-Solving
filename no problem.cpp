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
    //r("in.txt");
    //w("out.txt");
    int s,c[12],r[12],cn =1;

    while(scanf("%d", &s) == 1)
    {
        if(s < 0)
            break;
        int i,j;
        for(i = 0; i<12; i++)
            scanf("%d", &c[i]);
        for(i = 0; i<12; i++)
            scanf("%d", &r[i]);
        printf("Case %d:\n", cn++);
        for(i = 0; i<12; i++)
        {

            if(s < r[i])
                printf("No problem. :(\n");
            else
            {
                printf("No problem! :D\n");
                s = abs(s-r[i]);
            }
            s += c[i];
        }
    }
    return 0;
}


