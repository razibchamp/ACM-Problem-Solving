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

unsigned long long rev(unsigned long long data)
{
    unsigned long long rev_num = 0;

    while(data != 0)
    {
        rev_num = rev_num*10 + (data%10);
        data = data/10;
    }

    return rev_num;
}

unsigned long long P,i,rNum;
int N;
int main()
{
    freopen("a.txt", "r", stdin);
    scanf("%d", &N);
    while(N--)
    {
        scanf("%llu", &P);
        while(true)
        {
            rNum = rev(P);
            P = P + rNum;
            i++;
            if(P == rev(P))
            {
                printf("%llu %llu\n", i,P);
                i = 0;
                break;
            }
        }
        i = 0;
    }
    return 0;
}
