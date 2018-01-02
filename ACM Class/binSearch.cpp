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
#define pi 2*acos(0.0)

int binSearch(int arr[], int low, int high, int value)
{
    int idx = 0;

    while(low <= high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == value)
        {
            idx = mid;
            high = mid-1;
        }
        else if(value < arr[mid])
        {
            high = mid-1;

            //return binSearch(arr, low, mid-1, value);
        }
        else
        {
            low = mid+1;
            //return binSearch(arr, mid+1, high, value);

        }
    }

    return idx;
}


int main()
{

    //w("w.txt");

    int arr[10] = {1,2,3,4,5,7,8,9,10,11};

    int val = binSearch(arr, 0,9 ,11);
    printf("%d", val);
    return 0;
}
