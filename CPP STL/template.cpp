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
    map <string, int>m;
    map<string, int>::iterator itr;
    int t, a,c;
    char b[10];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &a);
        if(a == 1)
        {
            scanf("%s%d", b, &c);
            m[b] += c;
        }
        else
        {
            scanf("%s", b);
            if(a == 2)
                m.erase(b);
            else if(a == 3 )
            {
                itr = m.find(b);
                if(itr != m.end())
                {
                    printf("%d\n", itr->second);
                }
                else printf("0\n");

            }
        }


    }
    return 0;
}
