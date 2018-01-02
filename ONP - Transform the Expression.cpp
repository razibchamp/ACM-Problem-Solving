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
#define sc stack <char>
#define pb push_back
#define pob pop_back
char arr[410];
int main()
{
    //ios::sync_with_stdio(false);

    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        sc s;
        gets(arr);
        int len = strlen(arr);

        for(int i = 0; i<len; i++)
        {
            if(isalpha(arr[i]))
                printf("%c", arr[i]);
            else if(arr[i] == '(')
            {
                s.push(arr[i]);
            }
            else if(arr[i] == ')')
            {

                while(s.top() != '(' )
                {
                    printf("%c", s.top());
                    s.pop();
                }
                s.pop();
            }
            else
                s.push(arr[i]);
        }
        printf("\n");
    }
    return 0;
}


