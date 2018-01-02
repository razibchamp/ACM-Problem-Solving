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

int main()
{
    //r("in.txt");
    //w("w.txt");
    int t, ctr = 0;
    char str[32];

    scanf("%d", &t);
    getchar();
    gets(str);
    while(t--)
    {

        map <string, int>  m;
        ctr = 0;
        while(gets(str))
        {
            if(strlen(str) == 0)
            {
                break;
            }
            m[str]++; ctr++;
        }

        for(map<string, int>::iterator it = m.begin(); it!= m.end(); it++)
        {
            //cout<< it->second<< "\n"<<endl;
            double a = (double) it->second;
            cout << it->first;
            //printf(" %lf\n", a);
            printf(" %.4lf\n",(  a /ctr)*100 );
        }

        if(t != 0)
            printf("\n");

    }
    return 0;
}


