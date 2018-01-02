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

    map<string,int>m;
    int word, jd, sum = 0;
    char str1[20],str2[100000];
int main()
{
    //ios::sync_with_stdio(false);

    //r("in.txt");
    scanf("%d%d", &word, &jd);

    while(word--)
    {
        int money;
        scanf("%s%d",str1, &money);
        m[str1] = money;
    }

    getchar();
    while(jd--)
    {
        sum = 0;
        while(gets(str2))
        {
            int len = strlen(str2);
            char str3[100];
            if(str2[0] == '.')
            {
                printf("%d\n", sum);
                break;
            }

            for(int i = 0; i<len; i++)
            {
                int j = 0;
                while(str2[i] != ' ')
                {
                    if(str2[i] == '\0')
                        break;
                    str3[j] = str2[i]; j++, i++;
                }

                str3[j] = '\0';
                map<string, int>::iterator itr;
                itr = m.find(str3);
                if(itr != m.end())
                {
                    sum += itr->second;
                }
            }
        }
    }
    return 0;
}


