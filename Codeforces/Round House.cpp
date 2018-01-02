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



 int main()
{
    //w("w.txt");

    int n,a,b;

    scanf("%d%d%d", &n, &a, &b);

    if(b%n == 0)
    {
        printf("%d\n", a);
        printf("0");
    }
    else if(b < 0)
    {
        //int res = a+b;
        //int val = floor(res/n) * n;
        //printf("%d\n", res-val);

        printf("%d\n", (abs(a+b)%n));
    }
    else
    {
        int res = b%n;
        if((res+a)%n == 0) printf("%d\n", n);
        else printf("%d\n", (res+a)%n);
    }
    return 0;
}
