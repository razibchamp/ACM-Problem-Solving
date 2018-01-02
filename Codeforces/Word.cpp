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
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};
int main()
{
    //w("w.txt");


    string str;

    cin>>str;

    int len = str.length();
    int ctrUp = 0, ctrLow = 0;

    for(int i = 0; i<len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            ctrUp++;
        else
            ctrLow++;
    }

    if(ctrUp<ctrLow)
        for(int i = 0; i<len; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - ('A'-'a');
        }
    else if(ctrLow < ctrUp)
        for(int i = 0; i<len; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] + ('A'-'a');
        }
    else
        for(int i = 0; i<len; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - ('A'-'a');
        }


    cout<<str<<"\n";
    return 0;
}
