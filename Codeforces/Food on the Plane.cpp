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

int sz = 0;
long long num(char str[22])
{
    long long d = 0;

    long long i;
    for(i = 0; str[i] != '\0'&& isdigit(str[i]); i++)
    {
        d = d*10 + (str[i] - '0');
        sz++;
    }
    sz++;

    return d;

}

int val(char c)
{
    if(c == 'a') return 4;
    else if(c == 'b') return 5;
    else if(c == 'c') return 6;
    else if(c == 'd') return 3;
    else if(c == 'e') return 2;
    else if(c == 'f') return 1;
}
int main()
{
    //w("w.txt");

    char str[22];

    scanf("%s", str);




    long long digit = num(str);

    char ch = str[sz-1];

    if((digit-1)%2 == 0)
    {
        if(((digit-1)/2)%2 == 0)
            printf("%I64d", ((digit-1)/2)*6 + val(ch) + digit-1 );
        else
        {
            printf("%I64d", (((digit-1)/2)  - 1)*6 + val(ch) + digit-1 );
        }
    }
    else
    {
        if((digit/2)%2 == 0)
        {
            printf("%I64d", (digit/2 - 1)*6 + val(ch) + digit-3 );
        }
        else
        {
            printf("%I64d", (digit/2)*6 + val(ch) + digit-1 );
        }
    }

    return 0;
}
