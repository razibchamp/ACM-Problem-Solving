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
#include <stack>
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

//int num(char str[])
//{
//
//    int d = 0;
//    int len = strlen(str);
//    for(int i = 0; i<len; i++)
//    {
//        if(isdigit(str[i]))
//        {
//            d = d*10 + str[i] - '0';
//        }
//    }
//
//    return d;
//}

 int main()
{

    //w("w.txt");
    //r("in.txt");

    int t,n,x, cn = 1;
    char arr[10];
    scanf("%d", &t);

    while(cn <= t)
    {
        stack <int> currMax;
        stack <int> currVals;

        scanf("%d", &n);
        int m = 0;
        printf("Case %d:\n", cn);
        //getchar();
        while(n--)
        {
           // printf("N: %d\n", n);
            //getchar();
            //gets(arr);

            scanf("%s", arr);
            if(arr[0] == 'A')
            {
                int numm;
                scanf("%d", &numm);
//                int numm = num(arr);
                currVals.push(numm);
                if(numm > m)
                {
                    currMax.push(numm);
                    m = numm;
                }
                else
                {

                    currMax.push(m);
                }

            }
            else if(arr[0] == 'Q')
            {
                if(currVals.empty())
                    printf("Empty\n");
                else
                {
                    int val = currMax.top();
                    printf("%d\n", val);
                }
            }
            else if(arr[0] == 'R')
            {
                if(!currVals.empty())
                {

//                    if(currVals.top() == currMax.top())
//                    {
                        currMax.pop();
                        if(!currMax.empty())
                            m = currMax.top();
                        else
                            m = 0;
//                    }
                    currVals.pop();
                }
                else
                {
                    if(!currMax.empty())
                            m = currMax.top();
                    else
                        m = 0;
                }
            }

        }


        cn++;
        m = 0;
    }
    return 0;
}
