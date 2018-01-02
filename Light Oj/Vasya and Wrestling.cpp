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
#define MAX 200000+10;


long long p1[200000+10], p2[200000+10];

int chk(int i, int j)
{
    if(i < j)
        return 2;
    else if(i > j)
        return 1;
    else
    {

    }
}
int main(){
//    r("in.txt");
//    w("w.txt");

//
//    int n, ctrp1 = 0, ctrp2 = 0;
//    long long a, sum1= 0, sum2 =0;
//
//    scanf("%d", &n);
//    int i = 0, j= 0, flag = 0;
//    while(n--)
//    {
//        scanf("%lld", &a);
//
//        if(a > 0)
//        {
//            p1[i] = a;
//            sum1 += a;
//            i++, ctrp1++;
//            flag = 1;
//        }
//        else
//        {
//            p2[j] = -a;
//            sum2 += (-a);
//            j++, ctrp2++;
//            flag =2;
//        }
//
//    }
//
//    if(sum1 > sum2)
//        printf("first\n");
//    else if(sum1 < sum2)
//        printf("second\n");
//    else
//    {
//        if(chk(i,j) == 2)
//            printf("second\n");
//        else if(flag == 1)
//            printf("first\n");
//        else if(flag == 2)
//            printf("second\n");
//
//    }
//    else if(ctrp1 > ctrp2)
//    {
//        printf("first\n");
//    }
//    else if(ctrp1 < ctrp2)
//    {
//        printf("second\n");
//    }
//    else if(flag == 1)
//        printf("first\n");
//    else if(flag == 2)
//        printf("second\n");


	return 0;
}

