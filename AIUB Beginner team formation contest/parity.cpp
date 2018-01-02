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

const int sz = 1e5;
long long n;
int t, counter = 0;
long long bin[sz];
int main()
{
    int caseNo = 1;
    scanf("%d",&t);
    while(caseNo <= t)
    {
        scanf("%lld", &n);
        int qut = n;
        long long i =0;
        while(qut != 0)
        {
            bin[i] = qut %2;
            qut = qut/2;
            i++;
        }

        for(int j = 0; j < i; j++)
        {
            if(bin[j] == 1)
            {
                counter++;
            }
        }
        if(counter%2 == 0)
        {
            printf("Case %d: even\n", caseNo);
        }
        else
        {
            printf("Case %d: odd\n", caseNo);
        }
        memset(bin, 0, sizeof(bin));
        caseNo++;
        counter =0;
    }
    return 0;
}
