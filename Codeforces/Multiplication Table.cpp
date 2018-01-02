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
    //r("aa.txt");
    int n;
    long long x;
    while(cin>>n>>x)
    {
        int i=1, ctr=0;
        while(i <= n)
        {
            if(x%i !=0)
            {
                i++;
                continue;
            }
            int j=i;
            for(int k = 1; k <= n; k++)
            {
                if(j == x)
                    ctr++;
                if(j >= x)
                    break;
                j= i + j;
            }
            i++;
        }
        printf("%d\n", ctr);
    }
    return 0;
}
