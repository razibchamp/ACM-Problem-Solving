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
    char s1[105], s2[105];

    while(gets(s1) && gets(s2))
    {

        int len1,len2, ctr = 0;

        len1 = strlen(s1);
        len2 = strlen(s2);

        if(len1 != len2)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            for(int i = len1 - 1, j = 0; i >= 0 && j < len2; i--, j++)
            {

                if(s1[i] == s2[j])
                    ctr++;
                else
                    break;


            }
        }

        if(ctr == len1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
