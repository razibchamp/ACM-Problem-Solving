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

int main(){
    //w("w.txt");

    string str;

    while(getline(cin, str))
    {
        int len = str.size();
        int curVal = 64, sum = 0;
        for(int i = 0; i<len; i++)
        {
            if(str[i] == 'o')
            {
                sum += curVal;
                curVal /=2;
            }
            else if(str[i] == ' ' && i > 1)
            {
                curVal /=2;
            }
        }

        if(sum > 0)
            printf("%c", sum);
    }
	return 0;
}
