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


int main()
{
    //w("w.txt");

    string str;
    int n,t;

    scanf("%d%d", &n, &t);

    cin>> str;

    for(int i = 1; i<=t; i++)
    {
        int len = str.length();
        for(int j = 0; j<len; j++)
        {
            if(str[j] == 'B' && str[j+1] == 'G')
            {
                swap(str[j], str[j+1]);
                j++;
            }
        }
    }

    cout<<str<<"\n";

    return 0;
}
