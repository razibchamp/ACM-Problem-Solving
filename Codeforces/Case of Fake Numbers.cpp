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

int chk(int i, int j, int n, int (&arr)[110])
{
    int pos = 0;
    for(int b = 1; b<=n; b++)
    {
        if(b!= j && abs(b-j) > pos)
        {
            pos = abs(b-j);
        }
    }

    return pos;
}
int main(){
//    r("in.txt");
//    w("w.txt");

    int n, arr[110];
    int m = 0, mn = 110, posmn, posm;

    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > m)
        {
            m = arr[i];
            posm = i;
        }

        if(arr[i] < mn)
        {
            mn = arr[i];
            posmn = i;
        }
    }

    int val = max(chk(posm,posmn,n,arr), chk(posmn,posm,n,arr));
    printf("%d\n", val);

	return 0;
}

