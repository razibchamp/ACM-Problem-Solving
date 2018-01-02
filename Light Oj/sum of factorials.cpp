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


long long arr[30];
void init()
{

    arr[0] = 1;
    long long sum = 1;
    for(int i = 1; i<21; i++)
    {
        sum *=i;
        arr[i] = sum;
    }
}

int main(){
//    r("in.txt");
//    w("w.txt");

    init();

    int t, cn = 1;
    long long n;
    scanf("%d", &t);

    while(cn <= t)
    {


        scanf("%lld", &n);

        stack <int> res;
        for(int i = 20; i>=0; i--)
        {
            if(n >= arr[i] && n > 0)
            {
                res.push(i);
                n -= arr[i];
            }
            else if(n == 0) break;
        }

        int i = 0;
        printf("Case %d: ", cn++);
        if(n == 0)
        {
            while(!res.empty())
            {
                if(i == 0)
                    printf("%d!", res.top());
                else
                    printf("+%d!", res.top());
                i++;
                res.pop();
            }

            printf("\n");
        }
        else
            printf("impossible\n");
    }

	return 0;
}
