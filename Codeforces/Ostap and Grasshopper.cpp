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

    char str[102];
    int n,k, g, t;

    scanf("%d%d", &n,&k);

    scanf("%s", str);

    int len = strlen(str);
    for(int i = 0; i<len; i++)
    {
        if(str[i] == 'G')
            g =i;
        if(str[i] == 'T')
            t = i;
    }

    int i = 1, flag = 0;
        if(g < t)
        {
            for(int j = g; j<len; j += k)
            {
                if(str[j] == 'T')
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
                else if(str[j] == '#')
                    break;
            }

            i++;
        }
        else
        {
            for(int j = g; j>= 0; j -= k)
            {
                if(str[j] == 'T')
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
                else if(str[j] == '#')
                {
                    break;
                }
            }
            i++;
        }



    if(flag == 0)
    {
        printf("NO\n");
    }

    return 0;
}
