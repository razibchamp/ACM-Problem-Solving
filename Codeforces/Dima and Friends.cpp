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
int main()
{
    //w("w.txt");

    int n, sum = 0;

    scanf("%d" ,&n);

    for(int i = 0; i<n; i++)
    {
        int a;
        scanf("%d", &a);

        sum += a;
    }

    int ctr = 0;
    for(int i = 1; i<=5; i++)
    {
        if((sum+i)%(n+1) != 1)
            ctr++;
    }

    printf("%d\n", ctr);
    return 0;
}
