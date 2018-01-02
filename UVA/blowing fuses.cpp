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

int n,m,c, maxConsump = 0, seqNo = 1;
const int sz = 1e6;
int active[sz], con[sz], operations[sz];
int main()
{
    //freopen("aa.txt", "r", stdin);
    while(true)
    {
        scanf("%d%d%d",&n,&m,&c);
        if(n==0 && m==0 && c==0)
            break;
        int sum = 0;
        int i = 1;
        maxConsump = 0;
        while(i <= n)
        {
            scanf("%d", &con[i]);
            i++;
        }
        i = 1;
        while(i <= m)
        {
            int dev;
            scanf("%d",&dev);
            operations[i] = dev;
            i++;
        }
        i = 1;
        while(i <= m)
        {
            int dev = operations[i];
            if(active[dev] == 0)
            {
                active[dev] = 1;
                sum += con[dev];
                if(sum > maxConsump)
                    maxConsump = sum;
                if(sum > c)
                {
                    printf("Sequence %d\n",seqNo++);
                    printf("Fuse was blown.\n\n");
                    i = 0;
                    break;
                }
            }
            else if(active[dev] == 1)
            {
                active[dev] = 0;
                sum -= con[dev];
            }
            i++;
        }
        if(i > m)
        {
            printf("Sequence %d\n", seqNo++);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",maxConsump);
        }
        memset(active, 0, sz);
        memset(con, 0, sz);
        memset(operations, 0, sz);
    }
    return 0;
}
