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


char arr[51];


int sum(int i, int j, char (&arr2)[51])
{
    int sum = 0;
    for(;i<j; i++)
    {
        sum += arr2[i]- '0';
    }
    return sum;
}

int isLucky()
{
    int len = strlen(arr);

    for(int i = 0; i<len; i++)
    {
        if(arr[i] != '4' && arr[i] != '7') return 0;
    }

    return 1;
}
int main(){
    //w("w.txt");


    int n;

    scanf("%d", &n );
    getchar();
    scanf("%s", arr);
    if(sum(0,n/2, arr) == sum(n/2, n, arr) && isLucky()) printf("YES\n");
    else printf("NO\n");
	return 0;
}
