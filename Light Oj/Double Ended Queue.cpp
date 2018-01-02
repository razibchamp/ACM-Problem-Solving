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

#define pi 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>

int main(){
//    r("in.txt");
//    w("w.txt");


    int t, cn = 1, n, m;
    string str;


    scanf("%d",&t);

    while(cn <= t)
    {
        int sz = 0;
        scanf("%d%d", &n, &m);
        int val;
        deque<int>dq;
        printf("Case %d:\n", cn++);

        while(m--)
        {
            cin>>str;
            if(str == "pushLeft" || str == "pushRight")
                cin>>val;
            if(str == "pushLeft" && sz <n)
            {

                dq.push_front(val);
                printf("Pushed in left: %d\n", val);
                sz++;
            }
            else if(str == "pushRight" && sz < n)
            {
                dq.push_back(val);
                printf("Pushed in right: %d\n", val);
                sz++;
            }
            else if(str == "popLeft" || str == "popRight")
            {

                if(str == "popLeft" && !dq.empty())
                {
                    val = dq.front();
                    printf("Popped from left: %d\n", val);
                    dq.pop_front();
                    sz--;
                }
                else if(str == "popRight" && !dq.empty())
                {
                    val = dq.back();
                    printf("Popped from right: %d\n", val);
                    dq.pop_back();
                    sz--;
                }
                else
                    printf("The queue is empty\n");

            }
            else
            {
                printf("The queue is full\n");
            }
        }

    }

	return 0;
}

