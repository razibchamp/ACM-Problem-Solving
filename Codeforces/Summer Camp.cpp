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
#define pi 2*acos(0.0)


int arr[1010];

void init()
{
    int ctr = 1;

    int i = 1, val[1010];
    while(true)
    {
        if(ctr > 1002) break;

        int j = 0;
        int num = i;
        while(i!=0)
        {
            val[j] = i%10;
            i /= 10;
            j++;
        }

        for(int k = j-1; k>= 0; k--)
        {
            arr[ctr] = val[k];
            ctr++;
        }
        num++;
        i= num;
    }
}
 int main()
{
    //w("w.txt");

    init();
    int n;

    scanf("%d", &n);
    printf("%d\n", arr[n]);
//    for(int i = 1; i<= 1002; i++)
//        printf("%d", arr[i]);
    return 0;
}
