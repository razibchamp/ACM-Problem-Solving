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
        if(n == -1) break;
        int ctr = 0;
        while(n != 0)
        {
            n = n>>1;
            //printf("%d\n", n);
            ctr++;
        }
        printf("%d\n", ctr);
    }
	return 0;
}
