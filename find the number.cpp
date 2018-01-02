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

#define pi 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
#define leftNode node*2
#define rightNode node*2 + 1
#define mx 100001


//int binSearch(int arr[10], int low, int hi, int val)
//{
//    if(low > hi) return -1;
//
//    int mid = (low+hi)/2;
//    printf("Bla BLa");
//    if(arr[mid] == val) return mid;
//    else if(arr[mid] < val)
//    {
//        return binSearch(arr, mid+1, hi, val);
//    }
//    else
//    {
//        return binSearch(arr, low, mid, val);
//    }
//
//}

int arr[115];
int numberOfDiv[115];
int nod(int n)
{
    int ctr;
    if(n > 1)
        ctr = 2;
    else if(n == 1)
        return 1;
    else if(n == 0)
        return 0;

    printf("NOD %d:", n);
    for(int i = 2; i<= n/2; i++)
    {
        if(n%i == 0 && n/i == i)
        {
            printf("%d", i);
            ctr++;
        }
        else if(n%i == 0)
        {
            printf(" %d %d",n/i, i);
            ctr+= 2;
        }
    }
    printf("\n");
    return ctr;
}

void init()
{
    arr[1] = 1;
    arr[2] = 2;

    numberOfDiv[1] = 1;
    numberOfDiv[2] = 2;

    for(int i = 3; i<=50; i++)
    {
        arr[i] = i;
        int val = nod(i);
        printf("%d : %d\n", i, val);
        numberOfDiv[i] = numberOfDiv[i-1] + val;
//        printf("%d : %d\n", i, numberOfDiv[i]);
    }
}

int main()
{
    init();

//    int t, x;
//    long long n;
//
//    scanf("%d", &t);
//    while(t--)
//    {
//        scanf("%lld", &n);
//
//        if(n == 0)
//            printf("nai\n");
//        else if(n == 1)
//            printf("1\n");
//        else
//        {
//            int ctr = 0, flag = 0;
//            for(int i= 2; i< 110; i++)
//            {
//                if(numberOfDiv[i] == n)
//                {
//                    printf("%d\n", i);
//
//                    flag = 1;
//                    break;
//                }
//                else if(numberOfDiv[i] > n)
//                {
//                    printf("nai\n");
//                    flag = 1;
//                    break;
//                }
//            }
//
//            if(flag == 0)
//            {
//                printf("nai\n");
//            }
//        }
//    }
    return 0;
}

