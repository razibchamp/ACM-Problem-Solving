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

    int n,k,q, type, id, curk = 0;

    int narr[150009]={0}, karr[10]={0}, tarr[150009];
    scanf("%d%d%d", &n, &k, &q);

    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &tarr[i]);
    }

    for(int i = 1; i<=q; i++)
    {
        scanf("%d%d", &type, &id);

        if(type == 1)
        {
            if(curk >= k)
            {
                //printf("bla..\n");
                narr[id] = 1;
                karr[curk++] = id;
                for(int j = 0; j<k; j++)
                {
                    for(int L=0; L<k; L++)
                    {
                        if(tarr[karr[L]] < tarr[karr[L+1]])
                        {
                            int tmp = karr[L+1];

                            karr[L+1] = karr[L];
                            karr[L] = tmp;
                        }
                    }
                }
                curk--;
                narr[karr[curk]] = 0;
            }
            else
            {
                karr[curk] = id;
                narr[id] = 1; curk++;
            }

        }
        else if(type == 2)
        {
            if(narr[id] == 1)
                printf("YES\n");
            else printf("NO\n");
        }



    }
    return 0;
}
