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

int arr[10010];

 int main()
{
    //w("w.txt");

    for(int i = 0; i<= 10000; i++)
        arr[i] = -1;
    int l,h,r, arrszr = 0, arrszl = 0;

    while(scanf("%d%d%d", &l, &h, &r) == 3)
    {
        for(int i = l; i<=r; i++)
        {
            arr[i] = max(arr[i], h);
        }

        arrsz = max(arrsz, r);
        arrszl = min(arrszl, l);
    }

    for(int i = arrszl; i<= arrszr; i++)
    {
        printf("%d %d", i, arr[i]);

        while(true)
        {
            if(arr[i] == -1)
            {
                printf(" 0");
                while(arr[i] == -1)
                    i++;
                i--;
                break;
            }
            else if(arr[i] == arr[i+1] )
            {
                while(arr[i] == arr[i+1])
                    i++;

                break;
            }


        }


    }
    return 0;
}
