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

    int N,K,M;
    map<char,int>value;
    scanf("%d", &N);

    while(N--)
    {
        value.clear();
        //printf("N: %d\n",N);
        scanf("%d", &K);
        while(K--)
        {
            //printf("K: %d\n", K);
            char ch; int val;
            cin>> ch >> val;
            //scanf("%c%d", &ch, &val);
            value[ch] = val;
            //cout <<"Value: "<< value[ch];
            //printf("CH: %c Val: %d\n", ch,val);
        }

        int sum = 0;
        scanf("%d", &M);
        getchar();
        while(M--)
        {
            char str[10000+10];
            gets(str);
            int len = strlen(str);
            for(int i = 0; i<len; i++)
            {
                if(value.find(str[i]) != value.end())
                    sum += value[str[i]];
            }
        }

        printf("%.2lf$\n", (double)sum/100);

    }


    return 0;
}
