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

    //r("in.txt");

    int n;

    scanf("%d", &n);
    while(n--)
    {
            int a,b,c;

            scanf("%d%d%d", &a,&b,&c);

            if(a+b >c && a+c > b && b+c > a)
                printf("OK\n");
            else printf("Wrong!!\n");

    }
    return 0;
}
