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

int numOfDiv[1010], number[1010];
int nod(int n)
{
    int s = n/2;
    int ctr = 1, p = 0, i = 2, flag = 0;

    while(n%i == 0 && n> 1)
    {
        p++;
        n /= i;
        flag = 1;
    }

    p++;
    ctr *= p;
    p = 0;

    for(i = 3; i<= s; i += 2)
    {
        while(n%i == 0 && n> 1)
        {
            p++;
            n /= i;
            flag = 1;
        }

        p++;
        ctr *= p;
        p = 0;
    }

    if(flag)
        return ctr;
    return ctr = 2;
}

void init()
{
    numOfDiv[1] = 1;
    number[1] = 1;
    for(int i = 2; i<= 1000; i++)
    {
        numOfDiv[i] = nod(i);
        number[i] = i;

    }
}

void doSort()
{
    for(int i = 1; i<= 1000; i++)
    {
        for(int j = 1; j<= 1000-1; j++)
        {
            if(numOfDiv[j] > numOfDiv[j+1] || (numOfDiv[j] == numOfDiv[j+1] && number[j] < number[j+1]))
            {
                int tmp = numOfDiv[j];
                numOfDiv[j]= numOfDiv[j+1];
                numOfDiv[j+1] = tmp;

                tmp = number[j];
                number[j] = number[j+1];
                number[j+1] = tmp;
            }

        }
    }
}
int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1;

    scanf("%d", &t);

    init();

    doSort();
    while(cn <= t)
    {
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", cn++, number[n]);
    }

	return 0;
}

