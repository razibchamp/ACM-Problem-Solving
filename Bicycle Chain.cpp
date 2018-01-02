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
#define gcd(a,b) int gcd(int a, int b) return b == 0 ? a : gcd(b, a%b);
int main()
{
    //ios::sync_with_stdio(false);

    int n,m;

    while(scanf("%d", &n) == 1)
    {
        int a[52],b[52], m =0,ctr=0 ;
        vi v; v.clear();
        for(int i =0; i<n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &m);
        for(int i = 0; i <m; i++ )
            scanf("%d", &b[i]);

        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                int d;
                if(b[i]%a[j] == 0)
                    v.push_back(b[i]/a[j]);
            }
        }
        sort(v.begin(), v.end());
        m = v[ v.size() - 1] ;
        for(int i = v.size()-1; v[i] >= 0; i--)
        {
            if(v[i] == m)
                ctr++;
            else
                break;
        }
        printf("%d\n", ctr);
    }
    return 0;
}


