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
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}
int main()
{
    //ios::sync_with_stdio(false);

    int n;
    vi arr;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        arr.clear();
        int t = n;
        while(t--)
        {
            int d;
            scanf("%d", &d);
            arr.push_back(d);
        }
        int sz = arr.size();
        int i,j =1, ctr = 0;
        for(i = 0; i < sz - 1; i++)
        {
            j = i; j++;
            while(j < sz)
            {
                if(gcd(arr[i],arr[j]) == 1) ctr++;
                j++;
            }
        }

        n = (( n *( n-1 ) )/2)*6 ;
        if(ctr == 0)
            printf("No estimate for this data set.\n");
        else
            printf("%.6lf\n", sqrt(  (double) n/ctr) );

    }
    return 0;
}


