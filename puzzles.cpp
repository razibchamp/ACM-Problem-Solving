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


const int sz = 1010;
int arr[sz];
int min1(int i,int len, int maxVal, int minVal)
{
    int minimum = 0, m1, m2;
    if(i == len - 1)
    {
        m1 = max(maxVal, arr[i]);
        m2 = min(minVal, arr[i]);
        minimum = m1 - m2;
        return minimum;
    }
    else if(i > 0)
    {
        m1 = max(maxVal, arr[i+1]);
        m2 = min(minVal, arr[i+1]);
        minimum = m1 - m2;
        return min(minimum, min1(i+1, len, m1, m2));
    }
    m1 = max(arr[i], arr[i+1]);
    m2 = min(arr[i], arr[i+1]);
    minimum = m1 - m2;

    return min(minimum, min1(i+1, len, m1,m2));
}
int main()
{
    //ios::sync_with_stdio(false);
    int n,m;

    while(scanf("%d%d", &n, &m) == 2)
    {
        for(int i = 0; i< m; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", min1(0, m, 0, 0));
    }

    return 0;
}
