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
    string drinks[12] = {"ABSINTH","BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

    int n;
    while(scanf("%d", &n) == 1)
    {
        string str;
        int ctr = 0,i,j;
        getchar();
        for( i = 0; i<n; i++)
        {
            getline(cin, str);
            int d = 0, len = str.size();
            if(isdigit(str[0]))
            {
                for(j = 0; j<len; j++)
                {
                    d = d*10 + str[j] - '0';
                }

                if(d < 18)
                    ctr++;

            }
            else
            {
                for(j = 0; j<11; j++)
                {
                    if(str == drinks[j])
                        ctr++;
                }
            }
        }

        printf("%d\n", ctr);
    }
    //ios::sync_with_stdio(false);
    return 0;
}
