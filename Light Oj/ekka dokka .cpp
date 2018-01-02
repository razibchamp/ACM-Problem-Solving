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

int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1;
    long long n,m,w;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%lld", &w);

        long long i;
        for(i = 2; i<= w/2; i *= 2)
        {
            if(w%i == 0 && ((w/i)%2 !=0 ))
            {
                printf("Case %d: %lld %lld\n",cn++, w/i, i);
                break;
            }
        }

        if(i > w/2)
            printf("Case %d: Impossible\n",cn++);
    }

	return 0;
}

