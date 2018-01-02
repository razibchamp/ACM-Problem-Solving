#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
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
#define gcd(a,b) int gcd(int a, int b) return b == 0 ? a : gcd(b, a%b);
int main()
{
    //ios::sync_with_stdio(false);
    int mat[31][31] ={0}, n;

    while(scanf("%d", &n) == 1)
    {
        int sumc = 0, sumr = 0, w = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                scanf("%d", &mat[i][j]);
        }

        for(int i = 0; i<n; i++)
        {

            for(int j = 0; j<n; j++)
            {
                sumc = 0, sumr = 0;
                for(int k = 0; k < n; k++)
                    sumc += mat[k][j];
                for(int l = 0; l<n; l++)
                    sumr += mat[i][l];

                if(sumc > sumr) w++;
            }
        }
        printf("%d\n", w);
    }
    return 0;
}


