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

int main(){
    r("team.in");
    w("team.out");


    double a[3],b[3],c[3], val[7];

    for(int i =0; i<3; i++)
    {
        scanf("%lf", &a[i]);
    }

    for(int i =0; i<3; i++)
    {
        scanf("%lf", &b[i]);
    }

    for(int i =0; i<3; i++)
    {
        scanf("%lf", &c[i]);
    }


    val[0] = a[0]*a[0] + b[1]*b[1] + c[2]*c[2];
    val[1] = a[0]*a[0] + b[2]*b[2] + c[1]*c[1];
    val[2] = a[1]*a[1] + b[0]*b[0] + c[2]*c[2];
    val[3] = a[1]*a[1] + b[2]*b[2] + c[0]*c[0];
    val[4] = a[2]*a[2] + b[0]*b[0] + c[1]*c[1];
    val[5] = a[2]*a[2] + b[1]*b[1] + c[0]*c[0];

    sort(val, val + 6);


    printf("\n%f", sqrt(val[5]));
	return 0;
}

