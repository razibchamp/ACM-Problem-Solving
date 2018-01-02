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

const int sz = 1000+20;
char str[sz];
int main()
{
    int oddsum = 0, evesum = 0;
    while(scanf("%s", str))
    {
        if(str[0] == '0' && str[1] == '\0')
            break;
        int i=0,j=1, len = strlen(str);
        oddsum = 0, evesum = 0;
        for(int k=0; k<len; k++)
        {
            if(isdigit(str[i]) && i < len)
            oddsum += str[i] - '0';
            if(isdigit(str[j]) && j < len)
            evesum += str[j] - '0';
            i+=2, j+=2;
        }
        if(abs(evesum-oddsum) % 11 == 0)
            printf("%s is a multiple of 11.\n", str);
        else
            printf("%s is not a multiple of 11.\n",str);
    }
    return 0;
}
