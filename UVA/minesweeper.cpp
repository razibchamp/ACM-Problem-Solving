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

const int sz = 10000+70;
char field[sz][sz];
int vfield[sz][sz];
int fNo = 1;
int main()
{
    int n,m;
    while(true)
    {
        scanf("%d%d",&n,&m);
        getchar();
        if(n == 0 && m == 0)
            break;
        int i = 0,j = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%c", &field[i][j]);
            }
            getchar();
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j<m; j++)
            {
                if(field[i][j] == '*')
                {
                    int k = i-1; int l = j-1;
                    if( k<0) k++;
                    if ( l<0) l++;

                    for(k; k <= i+1; k++)
                    {
                        for(l; l <= j+1; l++)
                        {
                            if(field[k][l] == '*')
                            {
                                vfield[k][l] = -1;
                            }
                            else if(field[k][l] == '.')
                            {
                                vfield[k][l] = ++vfield[k][l];
                            }
                        }
                        l = j-1;
                        if( l<0) l++;
                    }
                }
            }
        }

        if(fNo > 1) printf("\n");
        printf("Field #%d:\n",fNo++);
        for(i = 0; i<n; i++)
        {
            for(j = 0; j<m; j++)
            {
                if(vfield[i][j] == -1)
                    printf("*");
                else
                    printf("%d",vfield[i][j]);
            }
            printf("\n");
        }

        memset(field, '\0', sizeof(field));
        memset(vfield,0, sizeof(vfield));
    }
    return 0;
}
