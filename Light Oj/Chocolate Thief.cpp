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

int bin(int n)
{
    int b = 0;
    int arr[32];
    int i = 0;
    while(n > 0)
    {
        arr[i] = n%2;
        n /= 2;
        i++;

    }

    for(--i; i>=0; i--)
    {
        b = b*10 + arr[i];
    }

    return b;
}
int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1, n,ctr, cur = 2, maxVal, minVal, a,b,c;
    char names[102][22], victims[22], theif[22] ;
    scanf("%d", &t);

    while(cn <= t)
    {
        maxVal = -1, minVal = 1000010;
        scanf("%d", &n);

        for(int i = 0; i<n; i++)
        {
            scanf("%s%d%d%d",names[i], &a,&b,&c);
            int res = a*b*c;

            if(res > maxVal)
            {
                maxVal = res;
                strcpy(theif, names[i]);
            }

            if(res < minVal)
            {
                minVal = res;
                strcpy(victims, names[i]);
            }
        }

        if(maxVal == minVal)
            printf("Case %d: no thief\n", cn++);
        else
            printf("Case %d: %s took chocolate from %s\n", cn++, theif, victims);
    }
	return 0;
}
