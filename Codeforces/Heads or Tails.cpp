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



int main(){
//    r("in.txt");
//    w("w.txt");


    int x,y, a, b, ctr = 0;
    int arr1[10000+10], arr2[10000+10];
    scanf("%d%d%d%d", &x,&y, &a,&b);
    int k =0;

    for(int i = a; i<=x; i++)
    {
        for(int j= b; j<= y; j++)
        {
            if(i > j)
            {
                ctr++;
                arr1[k] = i;
                arr2[k] = j;
                k++;
            }
        }
    }


    printf("%d\n", ctr);

    for(int i = 0; i<k; i++)
    {
        printf("%d %d\n", arr1[i], arr2[i]);
    }
	return 0;
}

