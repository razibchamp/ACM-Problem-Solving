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


int main()
{
    //w("w.txt");

    string str;

    cin>> str;

    int len = str.length();

    for(int i = 0; i<len; i++)
    {
        if(str[i]== '.') printf("0");
        else if( str[i] == '-' && str[i+1] == '.')
        {
            printf("1");
            i++;
        }
        else
        {
            printf("2");
            i++;
        }
    }

    printf("\n");

    return 0;
}
