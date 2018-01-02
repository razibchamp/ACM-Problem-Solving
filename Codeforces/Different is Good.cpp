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
#define pi 2*acos(0.0)

int countAlpha[255];
bool alpha[255];
 int main()
{
    //w("w.txt");

    int sum = 0, n, available = 26, minChng = 0;
    char str[100000+10];

    scanf("%d", &n);
    scanf("%s", str);

    int sz = strlen(str);

    for(int i = 0; i<sz; i++)
    {
        countAlpha[str[i]]++;
        if(alpha[str[i]] == false )
        {
            alpha[str[i]] = true;
            available--;
        }
        if(countAlpha[str[i]] == 2)
        {

            available--;
            countAlpha[str[i]]--;
            minChng++;
        }
    }

    if(minChng > 26 || available < 0)
        printf("-1\n");
    else
        printf("%d\n", minChng);


    return 0;
}
