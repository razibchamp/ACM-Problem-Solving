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

int ctr[15];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,num;
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
        {
            if(i <= 9)
                ctr[i]++;
            else
            {
                num = i;
                while(true)
                {
                    int j = num%10;
                    num /=10;
                    if(num == 0)
                    {
                        ctr[j]++;
                        break;
                    }
                    ctr[j]++;
                }
            }
        }
        for(int i=0; i<10; i++)
        {
            if(i == 9)
                printf("%d\n",ctr[i]);
            else
                printf("%d ", ctr[i]);
        }
        memset(ctr, 0, sizeof(ctr));
    }
    return 0;
}
