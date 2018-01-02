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
vector<string> str;
char str1[sz];
int main()
{
    freopen("in.txt", "r", stdin);
    while(gets(str1))
    {
        str.push_back(str1);
    }

    sort(str.begin(), str.end());

    while(!str.empty())
    {
        cout<<str.front()<<endl;
        //str.pop_back();
    }

    return 0;
}
