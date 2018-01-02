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

    int arr[102], n;

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 1001, ind1, ind2;
    for(int i = 0; i<n-1; i++)
    {
        if(sum > abs(arr[i]-arr[i+1]))
        {
            sum = abs(arr[i] - arr[i+1]);
            ind1 = i+1, ind2 = i+2;
        }
    }


    if( sum > abs(arr[0] - arr[n-1]))
    {
        sum = abs(arr[0] - arr[n-1]);
        ind1 = n;
        ind2 = 1;
    }

    cout<< ind1 <<" " << ind2;
    return 0;
}
