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

int steps[22];
int nt;


int jump(int n)
{

    int ctr = 0, ctr1, ctr2, ctr3, ctr4;

    if(steps[n] < 0)
    {
        ctr1 = 1+jump(n+1);
        ctr2 = 1+jump(n-abs(steps[n]));
    }

    ctr3 = 1+jump(n+1);
    ctr4 = steps[n]+jump(n+steps[n]);

}
int main()
{
    //w("w.txt");

    return 0;
}
