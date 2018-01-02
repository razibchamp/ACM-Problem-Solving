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
    //w("w.txt");

    int n;

    while(scanf("%d", &n) == 1)
    {
        int flag = 0;
        int m = n;
        while(n)
        {
            if(n%10 != 4 && n%10 != 7)
            {
                flag = 1; break;
            }
            n/= 10;
        }

        if(flag == 1)
        {
            if(m%2 != 0 && m%7 != 0)
                printf("NO\n");
            else printf("YES\n");
        }
        else printf("YES\n");
    }
	return 0;
}
