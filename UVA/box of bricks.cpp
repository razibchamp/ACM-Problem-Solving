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

const int sz = 70;
int arr[sz];
int n,h, setNo = 1;
int main()
{
    while(true)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        int i,sum = 0, minMove = 0, minBricks = 0;
        for(i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        minBricks = sum/n;
        for(i = 0; i<n; i++)
        {
            while(arr[i] > minBricks)
            {
                arr[i] = --arr[i];
                minMove++;
            }
        }
        printf("Set #%d\n",setNo++);
        printf("The minimum number of moves is %d.\n\n",minMove);
    }
    return 0;
}
