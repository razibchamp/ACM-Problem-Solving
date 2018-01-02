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


int chk(char str[])
{
    int len = strlen(str);
    int r = 0;
    for(int i = 0; i<len; i++)
    {
        if(str[i] == 'r')
        {
            return 1; break;
        }
    }
    return 0;

}

int num(char str[])
{
    int i = 0;
    int d = 0;
    int len = strlen(str);
    while(str[i] < '1' || str[i] > '9') i++;

    for(i; i<len; i++)
    {
        d = d*10 + str[i] - '0';
    }

    return d;
}
 int main()
{
    //w("w.txt");

    int n,m, arr[1002]={0};
    scanf("%d%d", &n, &m);
    getchar();
    while(m--)
    {
        char str[1010];
        gets(str);
        int val = num(str);
        int preVal = val;
        if(chk(str) == 1)
        {
            val += 1;
            if(val <= n)
                arr[val] = 1;
        }
        else
        {
            val -= 1;

            if(val >= 1)
                arr[val] = 1;
        }
    }

        int ctr = 0;
        for(int i = 1; i<= n; i++)
        {
            if(arr[i] == 0) ctr++;
        }

        if(ctr > 0) printf("%d\n", ctr);
        else printf("-1\n");
    return 0;
}
