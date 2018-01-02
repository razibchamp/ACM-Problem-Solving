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
int main()
{
    //ios::sync_with_stdio(false);



    while(true)
    {
        int g; char str[110];

        scanf("%d", &g);
        if(g == 0)
            break;
        scanf("%s",str);

        int len = strlen(str);
        int grplen= len/g;
        int j = grplen,i;
        for(i = 0; i<g; i++)
        {
            int ctr = 0;
            int k = j-1;
            for(; ; k--)
            {
                printf("%c", str[k]);
                ctr++;
                if(ctr >= grplen)
                    break;
            }
            j += grplen;
        }
        printf("\n");
    }


    return 0;
}


