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
int i,B[sz],P,counter=0;
int main()
{

    while(scanf("%d", &i))
    {
        if(i==0)
            break;
        counter=0;
        int qut =i, n=0;

        while(qut!=0)
        {
            int b = qut%2;
            if(b==1)
            {
                counter++;
            }
            B[n++] = b;
            qut /= 2;
        }

        printf("The parity of ");
        for(int j=n-1; j>=0; j--)
            printf("%d", B[j]);

        printf(" is %d (mod 2).\n",counter);
    }
    return 0;
}
