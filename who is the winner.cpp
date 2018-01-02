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

string  str[105];
int s[102], p[102];
int main()
{
    //r("in.txt");
    //ios::sync_with_stdio(false);

    int t,n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int k = -1, l = -1, w = -1;
        int i;
        for(i = 0; i < n; i++)
        {
            cin>>str[i]>>s[i]>>p[i];
            if(s[i] > k)
            {
                k = s[i]; w = i; l = p[i];
            }
            else if(s[i] == k)
            {
                if(l > p[i])
                {
                    l = p[i], w = i;
                }
            }

        }
        cout<<str[w]<<"\n";

    }
    return 0;
}
