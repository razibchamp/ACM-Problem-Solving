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


int isDistinct(char str[])
{
    int len = strlen(str);
    for(int i = 0; i<len; i++)
    {
        for(int j = i+1; j<len; j++)
        {
            if(str[i] == str[j]) return 0;
        }
    }
    return 1;

}

int num(char str[])
{
    int i = 0;
    int d = 0;
    int len = strlen(str);
    //while(str[i] < '1' || str[i] > '9') i++;

    for(i; i<len; i++)
    {
        d = d*10 + str[i] - '0';
    }

    return d;
}
 int main()
{
    //w("w.txt");

    int y;
    char arry[5];

    while(scanf("%s", arry) == 1)
    {
        int val = num(arry);

        while(true)
        {
            val++;

            sprintf(arry, "%d" , val);
            if(isDistinct(arry))
            {
                printf("%d\n", val); break;
            }
        }
    }
    return 0;
}
