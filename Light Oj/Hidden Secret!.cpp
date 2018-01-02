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


int countStr1[255], countStr2[255];

void countAlpha(char (&arr)[105], int (&str)[255])
{
    int sz = strlen(arr);

    for(int i = 0; i<sz; i++)
    {
        str[arr[i]]++;
    }
}

bool isPossible(char (&name)[105], int (&alphas)[255])
{
    int sz = strlen(name);

    for(int i = 0; i<sz; i++)
    {
        if(name[i] == ' ') continue;
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            if(alphas[name[i]] > 0)
                 alphas[name[i]]--;
            else if(alphas[name[i]+32] > 0 )
                alphas[name[i]+32]--;
            else
                return false;
        }
        else if(name[i] >= 'a' && name[i] <= 'z')
        {
            if(alphas[name[i]] > 0)
                 alphas[name[i]]--;
            else if(alphas[name[i]-32] > 0 )
                alphas[name[i]-32]--;
            else
                return false;
        }
    }

    return true;
}

void init()
{
    for(int i = 0; i<255; i++)
    {
        countStr1[i] = 0, countStr2[i] = 0;
    }
}
int main(){
//    r("in.txt");
//    w("w.txt");

    int t, cn = 1;
    char str1[105], str2[105];
    scanf("%d", &t);
    getchar();
    while(cn <= t)
    {

        gets(str1);
        gets(str2);
        init();
        countAlpha(str1, countStr1);
        countAlpha(str2, countStr2);

        if(isPossible(str1, countStr2) && isPossible(str2, countStr1))
        {
            printf("Case %d: Yes\n", cn++);
        }
        else
            printf("Case %d: No\n", cn++);

    }

	return 0;
}

/*
3
Tom Marvolo Riddle
I am Lord Voldemort
I am not Harry Potter
Hi Pretty Roar to man
Harry and Voldemort
Tom and Jerry and Harry
*/
