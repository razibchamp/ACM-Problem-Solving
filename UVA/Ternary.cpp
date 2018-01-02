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
    int n, arr[200];

    while(scanf("%d", &n) == 1)
    {
        if(n < 0)
            break;

        int i = 0;

        while(true)
        {
            int d = n%3;
            n/=3; arr[i++] = d;
            if(n == 0)
                break;
        }
        i--;
        for(i; i>=0; i--)
            printf("%d", arr[i]);

        printf("\n");
    }
    return 0;
}
