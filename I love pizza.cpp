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
#include <cstring>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iostream>

using namespace std;

#define PI 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
int countAlpha[200];
char str[600+10];
int main()
{
    //ios::sync_with_stdio(false);
    int tt;

    scanf("%d", &tt);
    getchar();
    while(tt--)
    {
        int arr[6];
        for(int i =0; i<200; i++)
            countAlpha[i] = 0;
        gets(str);
        int len = strlen(str);
        for(int i = 0; i<len; i++)
        {
            countAlpha[str[i]]++;
        }
        arr[0] = countAlpha['A'] / 3;
        arr[1] = countAlpha['R'] / 2;
        arr[2] = countAlpha['G'];
        arr[3] = countAlpha['I'];
        arr[4] = countAlpha['T'];
        arr[5] = countAlpha['M'];
        sort(arr, arr+6);

        printf("%d\n", arr[0]);
    }
    return 0;
}


