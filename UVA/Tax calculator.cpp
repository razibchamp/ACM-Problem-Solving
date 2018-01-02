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

// inc < 180000 Tax = 0
// min tax = 2000;


int main()
{
    int t, scale1 = 180000, scale2 = 300000, scale3 = 400000, scale4 = 300000;
    int caseNo = 1, income, tax =0;
    scanf("%d", &t);
    while(caseNo <= t)
    {
        tax =0;
        scanf("%d", &income);

            if(income > scale1)
                income = income - scale1;
            else
            {
                printf("Case %d: %d\n", caseNo++, tax);
                continue;
            }

            if( income <= scale2)
            {
                tax += ceil(income*.1);
                if(tax < 2000)
                    printf("Case %d: %d\n", caseNo++,2000);
                else
                    printf("Case %d: %d\n", caseNo++,tax);
                continue;
            }
            else if(income > scale2)
            {
                tax += ceil(scale2 *.1);
                income = income - scale2;
            }

            if(income <= scale3)
            {
                tax += ceil(income*.15);
                if(tax < 2000)
                    printf("Case %d: %d\n", caseNo++,2000);
                else
                    printf("Case %d: %d\n", caseNo++,tax);
                continue;
            }
            else if(income > scale3)
            {
                tax += ceil(scale3*.15);
                income = income - scale3;
            }
            if(income <= scale4)
            {
                tax += ceil(income*.2);
                if(tax < 2000)
                    printf("Case %d: %d\n", caseNo++,2000);
                else
                    printf("Case %d: %d\n", caseNo++,tax);
                continue;
            }
            else if( income > scale4)
            {
                tax += ceil(scale4*.2);
                income = income - scale4;
            }
            if(income > 0)
            {
                tax += ceil(income*.25);
            }

            if(tax < 2000)
                printf("Case %d: %d\n", caseNo,2000);
            else
                printf("Case %d: %d\n", caseNo,tax);
        caseNo++;
    }
    return 0;
}
