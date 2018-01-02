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

const int sz = 1e7;
int arr[sz];
int main()
{
    //freopen("aa.txt", "r", stdin);
    int l;
    while(scanf("%d", &l))
    {
        if(l == 0 )
            break;
        for(int i = 0; i<l; i++)
            scanf("%d", &arr[i]);
        sort(arr, arr+l);
        for(int i =0; i<l-1; i++)
            printf("%d ", arr[i]);
        printf("%d\n", arr[l-1]);
    }
    return 0;
}
