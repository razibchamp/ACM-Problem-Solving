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
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};
int main()
{
    //w("w.txt");

    int arr[3][3];

    int curStat[3][3] = {1,1,1,
                         1,1,1,
                         1,1,1};

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(arr[i][j] > 0)
            {
                for(int t=0; t<arr[i][j]; t++)
                {
                    for(int k = 0, l = 0; k<5 && l<5; k++, l++)
                    {
                        if(valid(i+dx[k], j+dy[l], 0,2))
                        {
                            if(curStat[ i+dx[k] ][ j+dy[l] ] == 1) curStat[i+dx[k]][j+dy[l]] = 0;
                            else curStat[i+dx[k]][j+dy[l]] = 1;
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
            printf("%d",curStat[i][j]);
        printf("\n");
    }

    return 0;
}
