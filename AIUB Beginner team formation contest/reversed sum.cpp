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

const int sz = 1e6;
char str1[sz], str2[sz];
int str[sz];
int main()
{
    int n;

    scanf("%d",&n);

    for(int i=0; i <n; i++)
    {
        scanf("%s%s", str1,str2);

        int tl1 = strlen(str1); int tl2 = strlen(str2);

        for(int num = 0; )
        int d1 = 0, d2=0, crr = 0, m=0;
        int l1 = strlen(str1);
        int l2 = strlen(str2);

        if(l1 < l2)
        {
            char tstr[sz];
            strcpy(tstr, str2);
            strcpy(str2, str1);
            strcpy(str1, tstr);
            int temp = l1;
            l1 = l2;
            l2 = temp;
        }

        for(int j=0; j < l1; j++)
        {
            if(isdigit(str1[j]))
                d1 = d1*10 + (str1[j] - '0');

            if(isdigit(str2[j]))
                d2 = d2*10 + (str2[j] - '0');

            if( d1+d2 >= 10)
            {
                str[m] = (d1+d2) - 10;
                m++;
                crr = 1;
            }
            crr = 0;
            d1=0; d2=0;
        }

    }
    return 0;
}
