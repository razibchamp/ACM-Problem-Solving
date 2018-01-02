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

    int n;

    while(scanf("%d", &n) == 1)
    {
        int sum = n - 10;
        if(n > 10)
        {
            if(sum >= 2 && sum <= 9)
                printf("4\n");
            else if(sum == 1 || sum == 11)
                printf("4\n");
            else if(sum == 10)
                printf("15\n");
            else
                printf("0\n");

        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
