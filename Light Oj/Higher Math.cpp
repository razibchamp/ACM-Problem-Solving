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



//int bin(int n)
//{
//    int b = 0;
//    int arr[32];
//    int i = 0;
//    while(n > 0)
//    {
//        arr[i] = n%2;
//        n /= 2;
//        i++;
//
//    }
//
//    for(--i; i>=0; i--)
//    {
//        b = b*10 + arr[i];
//    }
//
//    return b;
//}
//
//
//long long arr[30];
//void init()
//{
//
//    arr[0] = 1;
//    long long sum = 1;
//    for(int i = 1; i<21; i++)
//    {
//        sum *=i;
//        arr[i] = sum;
//    }
//}

long long sqr(long long n)
{
    return n*n;
}
int main(){
//    r("in.txt");
//    w("w.txt");

    int t, cn = 1;
    long long arr[3];
    scanf("%d", &t);

    while(cn <= t)
    {
        for(int i = 0; i<3; i++)
        {
            scanf("%lld", &arr[i]);
        }

        sort(arr, arr+3);

        if(sqr(arr[0])+sqr(arr[1])  == sqr(arr[2]))
            printf("Case %d: yes\n", cn++);
        else
            printf("Case %d: no\n", cn++);
    }
	return 0;
}
