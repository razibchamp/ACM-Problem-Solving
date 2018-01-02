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
int main()
{
    //ios::sync_with_stdio(false);
    //w("w.txt");
    int n;

    while(scanf("%d", &n) != EOF)
    {
        int arr[1010], flip = 0,flag = 0;

        for(int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        while(true)
        {
            for(int i = 0; i<n-1; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    flip++;
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
                else
                    flag++;
            }

            if(flag == n-1)
                break;
            else
                flag = 0;
        }

        printf("Minimum exchange operations : %d\n", flip);

    }

    return 0;
}


