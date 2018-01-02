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

    //r("in.txt");
    char str[102];

    while(scanf("%s", str) == 1)
    {
        char status[200];
        int i,j, ctr = 0;
        for(i = 'a'; i <= 'z'; i++)
        {
            status[i] = '0';
        }

        for(j = 0; str[j] != '\0'; j++)
        {
            if(status[ str[j] ] == '0')
            {
                status[str[j]]  = '1'; ctr++;
            }
        }

        if(ctr & 1)
            printf("IGNORE HIM!\n");
        else
            printf("CHAT WITH HER!\n");
    }
    return 0;
}
