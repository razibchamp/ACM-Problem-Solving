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

int main()
{
    //freopen("aa.txt" , "r", stdin);
    int n,caseNo = 1;
    scanf("%d",&n);
    while(n--)
    {
        int d1,d2,m1,m2,y1,y2;
        char c1,c2;
        scanf("%d%c%d%c%d",&d1,&c1,&m1,&c2,&y1);
        scanf("%d%c%d%c%d", &d2,&c1,&m2,&c2,&y2);
        int old = y1-y2;

        if(m1 < m2 )
            old--;
        else if(m1 == m2)
        {
            if(d2 > d1)
                old--;
        }

        if(old > 130)
            printf("Case #%d: Check birth date\n", caseNo++);
        else if( old < 0)
            printf("Case #%d: Invalid birth date\n", caseNo++);
        else
            printf("Case #%d: %d\n",caseNo++, old);
    }
    return 0;
}
