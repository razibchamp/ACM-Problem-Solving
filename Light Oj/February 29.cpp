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

string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int bin(int n)
{
    int b = 0;
    int arr[32];
    int i = 0;
    while(n > 0)
    {
        arr[i] = n%2;
        n /= 2;
        i++;

    }

    for(--i; i>=0; i--)
    {
        b = b*10 + arr[i];
    }

    return b;
}

int monthNum(string m)
{
    for(int i = 0; i<12; i++)
    {
        if(m == months[i]) return i+1;
    }
}
int main(){
//    r("in.txt");
//    w("w.txt");

    int t, cn = 1;
    long long date1, year1, date2, year2;
    string month1, month2;

    scanf("%d", &t);

    while(cn <= t)
    {
        int ctr = 0;
        cin>>month1;
        scanf("%lld,%lld", &date1, &year1);
        cin>>month2;
        scanf("%lld,%lld", &date2, &year2);
        long long  rangeStart, rangeEnd;
        int res;
        if( res = monthNum(month1) <= 2)
        {
            rangeStart = year1;
        }
        else
        {
            rangeStart = year1 + 1;
        }

        res = monthNum(month2);
        if(res == 1)
        {
            rangeEnd = year2 - 1;
        }
        else if(res == 2)
        {
            if(date2 == 29 ) rangeEnd = year2;
            else rangeEnd = year2 - 1;

        }
        else if(res > 2)
        {
            rangeEnd = year2;


        }


        rangeStart--;
        printf("Case %d: %d\n", cn++, (rangeEnd/4 - rangeStart/4)-(rangeEnd/100 - rangeStart/100) + (rangeEnd/400 - rangeStart/400));

    }

	return 0;
}

/*
10
January 12, 2012
March 19, 2012
August 12, 2899
August 12, 2901
August 12, 2000
August 12, 2005
February 29, 2004
February 29, 2012
*/
