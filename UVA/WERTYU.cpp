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

const int sz = 1e5;
char letters[150] ={"`1234567890-=QWERTYUIOP[]ASDFGHJKL;'\ZXCVBNM,./"};
char str[sz];
int main()
{
    int i = 0;
    while(gets(str))
    {
        int len = strlen(str);
        for(int j =0; j<len; j++)
        {
            if(str[j] == ' ')
            {
                printf(" ");
                continue;
            }
            int k = 0;
            while(str[j] != letters[k])
            {
                k++;
            }
            printf("%c", letters[k-1]);
        }
        printf("\n");
    }
    return 0;
}
