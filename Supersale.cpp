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


const int sz = 1010;

int t,n,p,w,g;
int  price[sz], weight[sz], maxWeight;
int ctr = 0;
int dp[1000][1000];
int greedy(int i, int remWeight)
{
    if(i >= n ) return 0;
    if(remWeight <= 0) return 0;
    if(dp[i][remWeight] != -1)	{
    	return dp[i][remWeight];
    }
    int ans = 0;
    int r1 = 0, r2 = 0;

    r2 += greedy(i+1, remWeight);

    if(weight[i] <= remWeight)
    {
        r1 += price[i] + greedy(i+1, remWeight-weight[i]);
    }

    ans += max(r1, r2);
    return dp[i][remWeight] = ans;
}

int main(){


    //w("w.txt");
    scanf("%d", &t);
    while(t--)
    {
        for(int i = 0; i<sz; i++)
        {
                 price[i]= 0, weight[i]=0;
        }

        scanf("%d", &n);
        for(int i = 0; i<n; i++)
        {
            scanf("%d%d", &price[i], &weight[i]);
        }
        scanf("%d", &g);
        int ans = 0;
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i<g; i++)
        {

            scanf("%d", &maxWeight);

            ans += greedy(0,maxWeight);
        }

        printf("%d\n",ans);
    }
	return 0;
}
