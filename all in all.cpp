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

const int sz = 1e7;
char s[sz],t[sz];
int main()
{
    while(scanf("%s%s",s,t) == 2)
    {
        int lens = strlen(s), j = 0, i = 0, flag = 0;

        while(j < lens)
        {
            while(t[i] != '\0')
            {
                if(s[j] == t[i])
                {
                    i++;
                    flag = 1;
                    break;
                }
                i++;
            }

            if(flag)
            {
                j++; flag = 0;
            }
            else
                break;
        }

        if(j == lens)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
