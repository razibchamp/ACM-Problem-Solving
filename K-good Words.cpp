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

int ctr[256], curr[30];

int main(){
//    r("in.txt");
//    w("w.txt");

    int t,k;
    char str[100010];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s%d", str, &k);

        for(int i = 'a'; i<= 'z'; i++)
            ctr[i] = 0;

        int sz = strlen(str);
        int it = 0;
        for(int i = 0; i<sz; i++)
        {
            if(ctr[str[i]] == 0)
            {
                curr[it++] = str[i];
            }

            ctr[str[i]]++;
        }

        int sum = 0, diff = 0, maxDiff = -1;
        while(true)
        {
            for(int i = 0; i<it; i++)
            {
                for(int j = i+1; j< it; j++)
                {
                    diff = abs(ctr[curr[i]] - ctr[curr[j]]);
                    maxDiff = max(maxDiff, diff);
                    if(diff > k)
                    {
                        maxDiff -= abs(diff - k);
                        sum += abs(diff - k);
                        if(ctr[curr[i]] < ctr[curr[j]])
                        {
                           ctr[curr[j]] = ctr[curr[j]] - abs(diff - k);
                        }
                        else if(ctr[curr[i]] > ctr[curr[j]])
                        {
                            ctr[curr[i]] = ctr[curr[i]] - abs(diff - k);
                        }
                    }
                }
            }
            if(maxDiff <= k ) break;
        }

        printf("%d\n", sum);

    }


	return 0;
}

