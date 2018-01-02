#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iostream>

using namespace std;

#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)

int main()
{
    //ios::sync_with_stdio(false);

    int n;
    while(scanf("%d", &n) == 1)
    {
        int i,j,a[1010]={-1}, flag = 0;

        for(i = 0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

            if(n == 1)
            {
                if(a[0] == 0)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else if(a[0] == 0)
            {
                for(j = 0; j<n - 1; j++)
                {
                    if(a[j] < a[j+1])
                        flag = 1;
                    else
                    {
                        flag = 0; break;
                    }
                }
                if(flag == 1)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else
            {
                while(a[0] != 0)
                {
                    for(i = 0; i<n; i++)
                    {
                        if(i%2 == 0)
                            a[i] = (++a[i])%n;
                        else if(a[i] == 0)
                            a[i] = n - 1;
                        else
                        {
                            a[i] = (--a[i]);
                        }
                    }
                }
                for(j = 0; j<n - 1; j++)
                {
                    if(a[j] < a[j+1])
                        flag = 1;
                    else
                    {
                        flag = 0; break;
                    }
                }
                if(flag == 1)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
    }
    return 0;
}
