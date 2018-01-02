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

const int sz = 1e7+50;
string str;
int i,j,m, caseNo = 1;
int main()
{
    freopen("in.txt", "r", stdin);
    while(scanf("%s", str.c_str()) == 1)
    {
        if(str[0] == '\0')
            break;
        int csno = 0, flag1 = 0, flag2 = 0;
        scanf("%d", &m);

        printf("Case %d:\n", caseNo++);
        while(csno < m)
        {
            scanf("%d%d", &i, &j);
            if(i > j)
            {
                int t = j;
                j = i;
                i = t;
            }
            char c = str[i];
            while( i < j )
            {
                if(c == str[i+1])
                {
                    i++;
                }
                else
                    break;
            }
            if(i == j)
                printf("Yes\n");
            else
                printf("No\n");
            csno++;
        }
    }
    return 0;
}
