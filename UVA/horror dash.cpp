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

int caseNo = 1;
int T,N,C,tc = 0;
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        while(N--)
        {
            scanf("%d",&C);
            if(C > tc)
                tc = C;
        }
        printf("Case %d: %d\n",caseNo++, tc);
        tc = 0;
    }
    return 0;
}
