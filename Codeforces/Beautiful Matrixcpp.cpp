#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iostream>

using namespace std;

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
#define pi 2*acos(0.0)

int change[100];

int main()
{
    //w("w.txt");

    int i =1, j=1, n, myI, myJ;

    for(i = 1; i<=5; i++)
        for(j = 1; j<=5; j++)
        {
            scanf("%d", &n);
            if(n == 1)
            {
                myI = i, myJ = j;
            }
        }

    printf("%d\n", abs(3-myI)+abs(3-myJ));
    return 0;
}
