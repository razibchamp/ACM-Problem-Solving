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
    char str[101];
    int t, cn = 1;
    scanf("%d", &t);
    getchar();
    while(cn <= t)
    {
        gets(str);
        int len = strlen(str), ctr = 0;

        for(int i = 0; i<len; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'c')
                ctr += str[i] - 'a' + 1;
            else if(str[i] >= 'd' && str[i] <= 'f')
                ctr += str[i] - 'd' + 1;
            else if(str[i] >= 'g' && str[i] <= 'i')
                ctr += str[i] - 'g' + 1;
            else if(str[i] >= 'j' && str[i] <= 'l')
                ctr += str[i] - 'j' + 1;
            else if(str[i] >= 'm' && str[i] <= 'o')
                ctr += str[i] - 'm' + 1;
            else if(str[i] >= 'p' && str[i] <= 's')
                ctr += str[i] - 'p' + 1;
            else if(str[i] >= 't' && str[i] <= 'v')
                ctr += str[i] - 't' + 1;
            else if(str[i] >= 'w' && str[i] <= 'z')
                ctr += str[i] - 'w' + 1;
            else ctr++;
        }

        printf("Case #%d: %d\n", cn++, ctr);
    }
    return 0;
}
