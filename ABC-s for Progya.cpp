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
    int t,cn = 1;

    scanf("%d", &t);
    getchar();
    while(cn <= t)
    {
        int i,j, alphas[200],ctr = 0;
        char str[1010], p[26];
        for(i = 0; i<200; i++)
        {
            alphas[i] = 0;
        }
        gets(str);

        int len = strlen(str);

        for(j = 0; j<len; j++)
        {
            if(alphas[str[j]] == 0 && str[j] != ' ')
            {

                alphas[ str[j] ] = 1; ctr++;
            }
        }
        if(ctr == 26)
            printf("Case %d: Happy Typing Progya!!\n", cn);
        else
        {
            printf("Case %d: ", cn);
            for(i = 'z'; i >= 'a'; i--)
            {
                if(alphas[i] == 0)
                    printf("%c", i);
            }
            printf("\n");
        }
        cn++;
    }

    return 0;
}
