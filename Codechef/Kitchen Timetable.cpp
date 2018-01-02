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
//    r("in.txt");
//    w("w.txt");

    int n, aa[10010], bb[10010], t;

    scanf("%d", &t);

    for(int i = 0; i<t; i++)
    {
        scanf("%d", &n);
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &aa[j]);
        }

        for(int j = 0; j<n; j++)
        {
            scanf("%d", &bb[j]);
        }

        int time = aa[0], ctr = 0;

        if(bb[0] <= time)
                ctr++;

        for(int j = 1; j<n; j++)
        {
            time = aa[j] - aa[j-1];
            if(bb[j] <= time)
                ctr++;

        }

        printf("%d\n", ctr);
    }

	return 0;
}

