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

void rev(int (&arr)[110], int n)
{
    int temp;
    for(int i = 0; i<n/2; i++)
    {
        temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }

}

int main(){
//    r("in.txt");
//    w("w.txt");

    int t, cn = 1,n,m, val1,val2;
    int arr[110];
    char ch;
    scanf("%d", &t);

    while(cn <= t)
    {

        scanf("%d%d",&n,&m);
        getchar();
        int head = 0, tail = n-1;
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

       // printf("M: %d\n", m);
        for(int i = 0; i<m; i++)
        {

            getchar();
            scanf("%c", &ch);

            if(ch == 'S')
            {
                scanf("%d", &val1);
                for(int i = 0; i<n; i++)
                    arr[i] += val1;

            }
            else if(ch == 'M')
            {
                scanf("%d", &val1);
                for(int i = 0; i<n; i++)
                    arr[i] *= val1;
            }
            else if(ch == 'D')
            {
                scanf("%d", &val1);
                for(int i = 0; i<n; i++)
                    arr[i] /= val1;
            }
            else if(ch == 'P')
            {
                scanf("%d%d", &val1, &val2);
                swap(arr[val1],arr[val2]);
            }
            else if(ch == 'R')
            {
                rev(arr, n);
            }

        }


        printf("Case %d:\n", cn++);

        for(int i = 0; i< n; i++)
        {
            if(i > 0)
                printf(" ");
            printf("%d",arr[i]);
        }

        printf("\n");

    }

	return 0;
}

/*
2
5 3
1 2 3 4 5
P 0 1
S 1
R
4 2
2 7 8 1
M 10
D 5
*/
