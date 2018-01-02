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
#define pb(a) push_back(a);
vector < int > v[10];
int main()
{
    v[0].pb(10);
    v[0].pb(10);
    v[0].pb(10);
    v[1].pb(12);
    printf("%d %d", v[0].size(), v[1].size());
    return 0;
}
