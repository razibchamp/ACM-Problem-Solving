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
    map<string, int>m;
    scanf("%d", &n);
    while(n--)
    {
        char str[100], str2[100];

        scanf("%s", str); getchar();

        gets(str2);
        m[str]++;
    }

    for(map<string,int>::iterator itr = m.begin(); itr!= m.end(); itr++)
    {
        cout<< itr->first << " " << itr->second << "\n";
    }
    return 0;
}
