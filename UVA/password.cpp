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

const int sz = 1e6;
char str[sz];
int flag [3];
int main()
{
    int i =0, pass = 0;

    while(cin>>str)
    {
        getchar();
        while(str[i] != '\0')
        {

                if(isdigit(str[i]))
                {
                    if(flag[0] == 0)
                    {
                        flag[0] = 1;
                    }
                }
                else if(str[i] >= 'a' && str[i] <= 'z')
                {
                    if(flag[1] == 0)
                    {
                        flag[1] = 1;
                    }
                }
                else if( str[i] >= 'A' && str[i] <= 'Z')
                {
                    if(flag[2] == 0)
                    {
                        flag[2] = 1;
                    }
                }
                if(flag[0] == 1 && flag[1] == 1 && flag[2] == 1)
                {
                    pass++;
                    memset(flag, 0, sizeof(flag));
                }
                i++;

        }
        printf("%d\n",pass);
        memset(flag, 0, sizeof(flag)); i = 0; pass = 0;
    }

    return 0;
}
