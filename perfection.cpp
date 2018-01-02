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

    int arr[102];
    int i,j,k;
    for( i=0; i<100; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
            break;
    }

    printf("PERFECTION OUTPUT\n");

    for(j = 0; j < i; j++)
    {
        int n = arr[j]/2;
        int sum = 0;
        for(int k = 1;  k <= n; k++)
        {
            if(arr[j]%k == 0 )
            {
                sum += k;
            }
        }

        if( sum == arr[j]) printf("%5d  PERFECT\n", arr[j]);
        else if( sum < arr[j]) printf("%5d  DEFICIENT\n", arr[j]);
        else if( sum > arr[j]) printf("%5d  ABUNDANT\n", arr[j]);
    }

    printf("END OF OUTPUT\n");
    return 0;
}
