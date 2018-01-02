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

int main()
{
    //w("w.txt");

    int s,n, strength[10000], point[10000], m = 0, i = 0;

    scanf("%d%d", &s, &n);

    int j = n;
    while(j--)
    {
        scanf("%d%d", &strength[i], &point[i]);
        i++;
    }

    for(int i= 0; i<n; i++)
    {
        for(j = 0; j<n-1; j++)
        {
            if(strength[j] > strength[j+1])
            {
                swap(strength[j], strength[j+1]);
                swap(point[j], point[j+1]);
            }
        }
    }

    for(i = 0; i<n; i++)
    {
        if(strength[i] < s)
        {
            s+= point[i];
        }
        else
        {
            printf("NO\n");
            break;
        }
    }

    if(i == n )
        printf("YES\n");
    return 0;
}
