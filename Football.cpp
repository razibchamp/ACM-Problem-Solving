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
    ios::sync_with_stdio(false);


    string str;

    while(cin>>str)
    {
        int ctr0 = 0, ctr1 = 0, i=0,flag = 0;
        int sz = str.size();

        while(str[i] != '\0')
        {
            //printf("%d\n", i);
            ctr0 = 0, ctr1 = 0;
            if(str[i] == '0')
            {
                for(; i<sz; i++)
                {
                    if(str[i] == '0' && str[i+1] == '0' && str[i+1] !='\0')
                    {
                        ctr0++;
                    }
                    else
                    {
                        if(ctr0 >= 6)
                        {
                            printf("YES\n"); flag = 1; ctr0 = 0; break;
                        }

                        ctr0 = 0;
                        break;
                    }
                }
            }
            else if(str[i] == '1')
            {
                for(; i<sz; i++)
                {
                    if(str[i] == '1' && str[i+1] =='1' && str[i+1] !='\0')
                    {
                        ctr1++;
                    }
                    else
                    {
                        if(ctr1 >= 6)
                        {
                            printf("YES\n"); flag = 1; ctr1 = 0; break;
                        }
                        ctr1 = 0; break;
                    }
                }
            }
            if(flag == 1)
                break;
            i++;
        }

        if(flag == 0)
            printf("NO\n");
    }
    return 0;
}


