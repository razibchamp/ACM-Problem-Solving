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

#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)

const int S = 2e5 + 5;
const int H = 200;

char ch[H], F[H], str[S];
int main()
{
    //ios::sync_with_stdio(false);
    //r("in.txt");
    int n,m;
    char a,b;

    while(scanf("%d%d", &n, &m) == 2)
    {
        for(int i = 'a'; i <= 'z'; i++)
        {
            ch[i] = i;
        }
        //getchar();
        scanf("%s", str);
        getchar();
        while(m--)
        {
            scanf("%c %c\n", &a, &b);

            swap(ch[a], ch[b]);
        }

        for(int i ='a'; i<='z'; i++)
        {
            F[ch[i]] = i;
        }

        for(int i = 0; i<n; i++)
        {
            printf("%c", F[str[i] ]);
        }
        printf("\n");
    }

    return 0;
}
