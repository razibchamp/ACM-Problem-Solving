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


    int t,n,x,y;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d%d", &n, &x, &y);
        int arr[200];
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        if(arr[0] == x && arr[n-1] == y) printf("BOTH\n");
        else if(arr[0] == x && arr[n-1] != y) printf("EASY\n");
        else if(arr[n-1] == y && arr[0] != x) printf("HARD\n");
        else printf("OKAY\n");
    }
	return 0;
}
