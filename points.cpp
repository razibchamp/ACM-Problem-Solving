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
    //w("w.txt");

    char ch;
    double x,y,x1[11],y1[11],x2[11],y2[11];
    int i = 0;
    while(true)
    {
        scanf("%c", &ch);
        if(ch == '*') break;

        scanf("%lf%lf%lf%lf", &x1[i], &y1[i], &x2[i], &y2[i]);
        i++;
    }

    int j = 0;
    while(scanf("%lf%lf", &x, &y) != EOF)
    {
        for(int k = 0; k<i; k++)
        {
                printf("K: %d\n", k);
            if(x >= x1[k] && x <= x2[k] && y>= y1[k] && y <= y2[k])
            {
                printf("K: %d\n", k);
                printf("point %d is located in figure %d\n", j+1 , k+1 ); break;
            }
        }
        j++;
    }
	return 0;
}
