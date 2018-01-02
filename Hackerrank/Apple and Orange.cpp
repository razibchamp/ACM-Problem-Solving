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

int change[100];

int main()
{
    //w("w.txt");

    int s,t,a,b,m,n;
    int sumApple =0, sumOrange = 0;

    scanf("%d%d", &s, &t);

    scanf("%d%d", &a,&b);

    scanf("%d%d", &m, &n);

    while(m--)
    {
        int d = 0;
        scanf("%d", &d);

        d = a + d;
        if(d >= s && d <= t)
            sumApple++;
    }

    while(n--)
    {
        int d = 0;
        scanf("%d", &d);

        d = b + d;
        if(d >= s && d <= t)
        {
            sumOrange++;
        }
    }

    printf("%d\n",sumApple);
    printf("%d\n",sumOrange);


    return 0;
}
