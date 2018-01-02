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

int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1;
    double radius, result;

    scanf("%d",&t);

    while(cn <= t)
    {
        scanf("%lf", &radius);

        result = ((2*radius)*(2*radius))- (pi*radius*radius);

        printf("Case %d: %.2lf\n",cn++, result);
    }

	return 0;
}

