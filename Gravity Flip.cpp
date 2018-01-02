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
int main()
{
    //ios::sync_with_stdio(false);

    int n, arr[101];

    while(scanf("%d", &n) == 1)
    {
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr+n);

        for(int i = 0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}


