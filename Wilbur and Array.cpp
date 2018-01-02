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

int main()
{
    //ios::sync_with_stdio(false);

    int arr[200010], a[200010], ctr = 0, n;

    while(scanf("%d", &n) == 1)
    {

        int i, j; ctr = 0;
        for(i = 0; i<n; i++)
            a[i] = 0;
        for(i = 0; i <n; i++)
        {
            scanf("%d", arr[i]);
        }
        i = 0;
        for(j = 0; j<n; j++)
        {
            while(a[i] != arr[j])
            {
                if(a[i] < arr[j])
                {
                    a[i] += 1;
                }
                else if(a[i] > arr[j])
                {
                    a[i] -=1;
                }

                if(a[i] == arr[j])
                {
                    ctr++; break;
                }
            }

        }
    }
    return 0;
}
