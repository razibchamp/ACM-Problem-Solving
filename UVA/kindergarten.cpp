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
int main()
{
    int i=0,word = 0;

    while(gets(str))
    {
        int len;
        while(true)
        {
            if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            {
                while(true)
                {
                    if(str[i] == ' ')
                    {
                        word++;
                        break;
                    }
                    else if( !(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
                    {
                        word++; break;
                    }
                    else if(str[i] == '\0')
                    {
                        word++;
                        break;
                    }
                    i++;
                }
            }
            if(str[i] == '\0')
                break;
            i++;
        }
        printf("%d\n",word);
        word=0;
        i=0;
    }
    return 0;
}
