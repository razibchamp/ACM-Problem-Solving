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

    int n, open1 = 0, close1 = 0, open2 = 0, close2 = 0;

    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int a,b;

        scanf("%d%d", &a, &b);

        if(a == 0) close1++;
        else open1++;

        if(b == 0)close2++;
        else open2++;

    }

    int sum = 0;

    sum += min(close1,open1);
    sum += min(close2, open2);

    printf("%d\n", sum);

    return 0;
}
