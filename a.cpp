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
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    string str[105];
    int n;

    while(cin >> n)
    {
        int i, j, ans = 0, ctr = 0, len,l;
        for(i = 0; i<n; i++)
        {
            cin>>str[i];
        }
        for(i = 0; i < 26; i++)
        {
            for(j = 0; j < 26; j++)
            {
                ctr = 0;
                for(int k = 0; k < n; k++)
                {
                    len = str[k].size();
                    for(l = 0; l < len; l++)
                    {
                        if(str[k][l] - 97 != i && str[k][l] - 97 != j) break;
                    }
                    if(l == len) ctr += len;
                }
                ans = max( ans, ctr);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
