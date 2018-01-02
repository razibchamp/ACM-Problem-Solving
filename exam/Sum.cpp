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

int n;
int chkrows(int arr[100][100])
{
    int sum = 0, m = 0, temp = 0;
    for(int i = 0; i<n; i++)
    {
        for( int j = 0; j<n; j++)
        {
            sum += arr[i][j];
        }
        if(m == 0)
        {
            temp = sum; sum = 0;
        }
        else if(sum == temp)
        {
            sum = 0;
        }
        else
            return 0;

        m++;
    }
    if(m > 0) return 1;
}

int chkdiag(int arr[100][100])
{
    int sum1 = 0,sum2 = 0, m = 0, temp = 0;
    int i = 0, j = 0, p = n -1, q = n-1;
    for(int l = 0; l<n; l++)
    {
        sum1 += arr[i++][j++];
        sum2 += arr[p--][q--];
    }
    if(sum1 == sum2) return 1;
    return 0;
}

int chkcolm(int arr[100][100])
{
    int sum = 0, temp = 0, m = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            sum += arr[j][i];
        }

        if(m == 0)
        {
            temp = sum; sum =0;
        }
        else if(temp == sum)
        {
            m++; sum = 0;
        }
        else return 0;
        m++;
    }
    if(m > 0) return 1;
}

int main()
{
    //ios::sync_with_stdio(false);

    int arr[100][100];

    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int a = chkcolm(arr), b = chkdiag(arr), c = chkrows(arr);

    if(a == b && b == c) printf("Magic Square\n");
    else printf("Regular Square\n");

    return 0;
}


