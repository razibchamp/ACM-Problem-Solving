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
int main()
{
    //ios::sync_with_stdio(false);

    int n, ctr = 0;

    while(scanf("%d", &n) != EOF)
    {
        if(ctr != 0)
            printf("\n");
        ctr++;
        if( (n%4 == 0 || n%400 == 0 ) &&  n%100 != 0)
        {
            printf("This is leap year.\n");
            if(n%15 == 0)
                printf("This is huluculu festival year.\n");
            if(n%55 == 0)
                printf("This is bulukulu festival year.\n");
        }
        else if(n%15 == 0)
        {
                printf("This is huluculu festival year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }


    }
    return 0;
}


