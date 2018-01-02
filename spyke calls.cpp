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

    int n;

    while(scanf("%d", &n) == 1)
    {
        int arr[1000+10] = {0}, i, m = 0, p = 0, flag = 0,j;
        for(i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i] > m)
                m = arr[i];
        }
        sort(arr, arr+n);
        int ctr = 0; j = 1;
        for(i = 0; i<n;)
        {
            //printf("%d\n", i);
            if(arr[i] == 0)
            {
                i++; continue;
            }
            if(arr[i] == j)
            {
                ctr++;
            }
            else if(j <= m)
            {
                while(arr[i] != j)
                    j++;
                ctr = 0;
                continue;
            }
            if(ctr > 2)
            {
                flag = 1; break;
            }
            else if(ctr == 2) p++;
            i++;
        }

        if(flag == 0)
            printf("%d\n", p);
        else if(flag == 1)
            printf("-1\n");


    }
    return 0;
}


