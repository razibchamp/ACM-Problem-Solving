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
    int t,p,l,cn = 1;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &p,&l);
        int n = p-l,sqrtn = (int) sqrt((double)n);
        int i = 1, flag = 0, arr[100000], j = 0;
        printf("Case %d:", cn);
        while(i <= sqrtn)
        {

            if(n%i == 0)
            {
                if(l < i)
                {
                    printf(" %d", i);
                    flag = 1;
                }


                 if(n/i != i  && l < n/i)
                 {
                     flag = 1;
                     arr[j++] = n/i;
                 }
            }
            i++;
        }

        if(flag == 1)
        {
            for(int k = j-1; k>= 0; k--)
            printf(" %d", arr[k]);
        }
        else printf(" impossible");
        printf("\n");
        cn++;
    }

    return 0;
}
