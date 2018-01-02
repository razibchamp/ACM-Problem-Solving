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

char str[1200];
int main()
{
    //r("aa.txt");
    while(gets(str))
    {
        if(strcmp(str, "0") == 0)
            break;
        int len = strlen(str);
        int d=1, i=0, sum=0;
        for(int i=0; i < len; i++)
        {
            sum += str[i] - '0';
        }


        while(sum > 9)
        {
            int s = 0;
            d++;
            while(sum != 0)
            {
                s += sum%10;
                sum /= 10;
            }
            sum = s;
        }

        if( sum >= 9 && sum%9 == 0)
            printf("%s is a multiple of 9 and has 9-degree %d.\n", str,d);
        else if( sum < 9)
            printf("%s is not a multiple of 9.\n", str);
    }
    return 0;
}
