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

    int n, ctr = 0, val = 0;
    char str[200000+10];
    scanf("%d", &n);

    scanf("%s", str);

    int i = 0;
    if(str[i] == '>' && str[n-1] == '<')
    {
        val = 0;
    }
    else
    {
        while(str[i] != '\0')
        {
            while(str[i] == '<')
            {
                ctr++; i++;
            }
            val += ctr;
            ctr = 0;
            i++;
            break;
        }


        i = n-1;
        while(i >= 0)
        {
            while(str[i] == '>')
            {
                ctr++; i--;
            }
            val += ctr;
            ctr = 0;
            i--;
            break;
        }


    }

    printf("%d", val);
    return 0;
}
