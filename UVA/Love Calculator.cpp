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

char name1[30], name2[30];
int main()
{
    //r("in.txt");
    while(gets(name1) && gets(name2))
    {
        int sn1 = 0, sn2 = 0, sum1 = 0, sum2 = 0;
        int i = 0, j = 0, ac1 = 0, ac2 = 0;

        while(name1[i] != '\0')
        {
            if(name1[i] >= 'a' && name1[i] <= 'z')
            {
                sn1 += name1[i] - 96; ac1++;
            }
            else if(name1[i] >= 'A' && name1[i] <= 'Z')
            {
                sn1 += name1[i] - 64; ac1++;
            }
            i++;
        }

        while(name2[j] != '\0')
        {
            if(name2[j] >= 'a' && name2[j] <= 'z')
            {
                sn2 += name2[j] - 96; ac2++;
            }
            else if(name2[j] >= 'A' && name2[j] <= 'Z')
            {
                sn2 += name2[j] - 64; ac2++;
            }
            j++;
        }

        if(ac1 == 0 && ac2 == 0)
            continue;
        while(true)
        {
            if(sn1 > 9)
            {
                while(sn1 != 0)
                {
                    sum1 += sn1%10;
                    sn1 /= 10;
                }
                sn1 = sum1;
                sum1 = 0;
            }

            if(sn2 > 9)
            {
                while(sn2 != 0)
                {
                    sum2 +=  sn2%10;
                    sn2 /= 10;
                }
                sn2 = sum2;
                sum2 = 0;
            }

            if( sn1 <= 9 && sn2 <= 9)
            {
                break;
            }
        }

        if(sn1 <= sn2)
        {
            printf("%.02lf %%\n", (double)(sn1*100)/sn2);
        }
        else
        {
            printf("%.02lf %%\n", (double)(sn2*100)/ sn1);
        }

    }
    return 0;
}
