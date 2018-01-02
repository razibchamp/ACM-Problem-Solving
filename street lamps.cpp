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

    char str[102]; int t,n;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &n);
        scanf("%s", str);
        int ctr = 0;
        for(int i = 0; i<n; i++)
        {

            if(str[i] == '*' && i > 0 && i < n-1)
            {
                if(str[i+1] != '*') str[i+1] = '1';
                if(str[i-1] != '*') str[i-1] = '1';
            }
            else if(str[i] == '.')
            {

                if( i > 0 && i < n-1 && str[i+1] == '.' && str[i-1] == '.')
                {
                    str[i] = '*'; ctr++;
                    str[i+1] = '1' , str[i-1] = '1';
                }
                else if(i > 0 && i < n-1 && str[i+1] == '1' && str[i-1] == '1')
                {
                    str[i] = '*'; ctr++;
                }
                else if(i == 0)
                {
                    if(str[i+1] == '.' && str[i+2] == '.')
                    {
                        str[i+1] = '*', str[i] = '1', str[i+2] = '1';
                    }

                }
                else if(i == n-1)
                {
                    if(str[i-1] == '.' && str[i-2] == '.')
                    {
                        str[i-1] = '*', str[i] = '1', str[i-2] = '1';
                    }
                }
            }
        }

        printf("%d\n", ctr);
    }
    return 0;
}
