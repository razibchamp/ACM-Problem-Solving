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

const int sz = 1e7;
char str[sz];
char str1[sz];
char str3[sz];
int main()
{
    //freopen("aa.txt", "r", stdin);
    while(gets(str))
    {
        if(strcmp(str,"DONE") == 0)
            break;

        int len = strlen(str);
        int i=0,j=0;
        for(i =0; i < len; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str1[j] = str[i] + 32; j++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str1[j] = str[i]; j++;
            }
        }
        str1[j] = '\0';
        len = strlen(str1); j=0;
        //cout<<len<<endl;
        for(i = len - 1; i>=0; i--)
        {
            str3[j] = str1[i]; j++;
        }
        str3[j] = '\0';
        //cout<<strlen(str3)<<endl;
        if(strcmp(str1,str3) == 0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
