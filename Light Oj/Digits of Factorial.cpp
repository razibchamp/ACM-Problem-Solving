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

#define pi 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>

double arr[1000000+10];

void init()
{
    arr[0] = 1;
    arr[1] = 0;


    for(int i = 2; i<= 1000000; i++)
    {
        arr[i] = arr[i-1]+ (log10((double) i));
    }

}
int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1, n, base;

    init();

    scanf("%d",&t);

    while(cn <= t)
    {
        scanf("%d%d", &n, &base);

        if(n > 1)
            printf("Case %d: %d\n", cn++, (int) (arr[n]/log10((double) base)) + 1);
        else
            printf("Case %d: 1\n", cn++);
    }

	return 0;
}

