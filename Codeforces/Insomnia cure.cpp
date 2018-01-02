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
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};

int arr[100000+10];
int main()
{
    //w("w.txt");

    int k,l,m,n,d;

    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);

    if(k == 1 || l == 1 || m == 1 || n == 1)
        printf("%d\n", d);
    else
    {
        int sum = 0;

        for(int i = k; i<=d; i+=k)
        {
            if(arr[i] == 0)
            {
                sum++;
                arr[i] = 1;
            }
        }

        for(int i = l; i<=d; i+=l)
        {
            if(arr[i] == 0)
            {
                sum++;
                arr[i] = 1;
            }
        }

        for(int i = m; i<=d; i+=m)
        {
            if(arr[i] == 0)
            {
                sum++;
                arr[i] = 1;
            }
        }

        for(int i = n; i<=d; i+=n)
        {
            if(arr[i] == 0)
            {
                sum++;
                arr[i] = 1;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
