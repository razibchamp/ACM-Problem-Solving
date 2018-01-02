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

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
int main()
{
    //ios::sync_with_stdio(false);

    int t,cn = 1;
    double term1, term2, Final, attdnce, ct1, ct2,ct3;

    scanf("%d",&t);

    while(cn <= t)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf", &term1, &term2, &Final, &attdnce, &ct1, &ct2, &ct3);
        //printf("%lf %lf %lf %lf %lf %lf %lf",term1, term2, Final, attdnce, ct1, ct2,ct3);
        double avg;

        avg = ct1 + ct2 + ct3 - min( min(ct1,ct2),ct3);

        avg = avg/2;
        double marks = term1 + term2 + Final + avg +attdnce;

        if(marks >= 90 )
            printf("Case %d: A\n", cn++);
        else if(marks >= 80)
            printf("Case %d: B\n", cn++);
        else if(marks >= 70)
            printf("Case %d: C\n", cn++);
        else if(marks >= 60)
            printf("Case %d: D\n", cn++);
        else
            printf("Case %d: F\n", cn++);
    }
    return 0;
}


