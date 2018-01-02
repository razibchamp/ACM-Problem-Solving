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

char str[220][220];
char str1[220];
int main()
{
    int n;

    while(true)
    {
        scanf("%d", &n);
        if(n == 0)
            break;

        scanf("%s", str1);
        int row = ceil(strlen(str1)/n);
        int ctr = 0;
        int col = 0;
        for(int i = 0; i < row; i++)
        {
            for(col = 0; col < n; col++)
            {
                if(str[ctr] == '\0')
                    break;

                str[i][col] = str1[ctr];
                ctr++;
            }
            if(col < n)
                break;

            i++;
            for(col = n-1; col >= 0; col--)
            {
                if(str1[ctr] == '\0')
                    break;

                str[i][col] = str1[ctr];
                ctr++;
            }
            if(col > 0)
                break;
        }

        for(col = 0; col < n; col++)
        {
            for(int i = 0; i < row; i++)
            {
                printf("%c", str[i][col]);
            }
        }
        printf("\n");

    }
    return 0;
}
