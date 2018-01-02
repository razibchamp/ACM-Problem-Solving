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

    int n;

    while(scanf("%d", &n) == 1)
    {
        int i,j,k, arr[102], ctr = 0;

        for(i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        while(true)
        {

            for(i = 0; i < n - 1; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    arr[i] = arr[i] - arr[i+1];
                }
                else if(arr[i] < arr[i+1])
                {
                    arr[i+1] = arr[i+1] - arr[i];
                }
                else
                    ctr++;
            }
            if(ctr == n -1)
                break;
            ctr = 0;
        }

        int sum = 0;
        for(j = 0; j<n; j++)
        {
            sum += arr[j];
        }
        printf("%d\n", sum);

    }
    return 0;
}
