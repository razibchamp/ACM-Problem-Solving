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

int value[10];
map<string,int>m;

int toNum(char str[])
{
    int b = 0,i=0;

    while(str[i] != '\0')
    {
        b = b*10 + str[i]-'0'; i++;
    }
    return b;
}

int arabic(char in[])
{
        int i =0, sum =0, len = strlen(in);
        while(i < len)
        {
            if(in[i] == 'I')
            {
                if(in[i+1] == 'V')
                {
                    sum += 4; i+=2; continue;
                }
                else if(in[i+1] == 'X')
                {
                    sum += 9; i+=2; continue;
                }
                else sum += 1;
            }
            else if(in[i] == 'X')
            {
                if(in[i+1] == 'C')
                {
                    sum += 90; i+=2; continue;
                }
                else if(in[i+1] == 'L')
                {
                    sum += 40; i += 2; continue;
                }
                else sum += 10;
            }
            else if(in[i] =='C')
            {
                if(in[i+1] == 'D')
                {
                    sum+=400; i+=2; continue;
                }
                else if(in[i+1] == 'M')
                {
                    sum+= 900; i+=2; continue;
                }
                else sum+= 100;
            }
            else sum+=value[in[i]];
            i++;
        }

        return sum;
}
int main()
{
    //ios::sync_with_stdio(false);

    //w("w.txt");
    value['I'] = 1, value['V'] = 5, value['X'] = 10, value['L'] = 50, value['C'] =100, value['D'] = 500, value['M'] = 1000;
    m["I"] = 1, m["V"] = 5, m["X"] = 10, m["L"] = 50, m["C"] =100, m["D"] = 500, m["M"] = 1000;
    m["IV"]=4, m["IX"] = 9, m["XL"]=40,m["XC"] =90,m["CD"]=400,m["CM"]=900;
    char in[1000];

    while(scanf("%s", in) != EOF)
    {
        int num;
        if(isdigit(in[0]))
        {
            num = toNum(in);
            map<string,int>::iterator itr;
            while(num != 0)
            {
                int Max = 0; string s;
                for(itr = m.begin(); itr!= m.end(); itr++)
                {
                    if(num - itr->second >= 0 && itr->second > Max)
                    {
                        Max = itr->second; s = itr->first;
                    }
                }
                num -=Max; cout<<s;
            }
            printf("\n");

        }
        else printf("%d\n",arabic(in));
    }

    return 0;
}
