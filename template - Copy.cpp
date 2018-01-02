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

    int a,b;

    scanf("%d%d", &a,&b);

    if(a == 0 && b == 0)
        printf("NO\n");
    else if(a == 0 && b == 1)
        printf("YES\n");
    else if(a == 1 && b == 0)
        printf("YES\n");
    else if(a == b)
        printf("YES\n");
    else if(abs(a-b) == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
