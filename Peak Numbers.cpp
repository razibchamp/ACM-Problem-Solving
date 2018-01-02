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
const int sz = 1e6+10;
int arr[sz];
int main()
{
    //ios::sync_with_stdio(false);
    int  n, cn = 1;

    while(scanf("%d", &n) == 1 && n!=0)
    {
        int ctr = 0;
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i<n; i++)
        {
            if(i > 0 && i<n-1 && arr[i] > arr[i-1] && arr[i] > arr[i+1] && arr[i] > 0)
            {
                ctr++;
            }
        }
        printf("Case %d: %d\n", cn++, ctr);
    }
    return 0;
}


