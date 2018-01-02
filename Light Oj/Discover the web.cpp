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


    int t, cn = 1;

    scanf("%d", &t);
    while(cn <= t)
    {

    char arr[100], ar[100];
    stack <string> backStack, forwardStack;


       string currStr = "http://www.lightoj.com/";
       printf("Case %d:\n", cn++);
       while(true)
       {
            scanf("%s", arr);

            if(strcmp(arr, "VISIT") == 0)
            {
                scanf("%s", ar);
                backStack.push(currStr);
                currStr = ar;

                cout<<currStr<<"\n";

                while(!forwardStack.empty()) forwardStack.pop();
            }
            else if(strcmp(arr, "BACK")  == 0)
            {
                if(!backStack.empty())
                {
                    forwardStack.push(currStr);

                    currStr = backStack.top();
                    backStack.pop();
                    cout<<currStr<<"\n";

                }
                else printf("Ignored\n");

            }
            else if(strcmp(arr, "FORWARD") == 0)
            {
                if(!forwardStack.empty())
                {
                    backStack.push(currStr);
                    currStr = forwardStack.top();
                    forwardStack.pop();
                    cout<<currStr<<"\n";
                }
                else printf("Ignored\n");
            }
            else if(strcmp(arr, "QUIT") == 0) break;
       }
    }
	return 0;
}
