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

string str[16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
string names[101];
int main()
{

    int n;

    scanf("%d", &n);
    getchar();
    int i = 0;
    while(i < n)
    {
        getline(cin, names[i]);
        i++;
    }
    i=0; int j = 0, k = 0;


        while(i < n)
        {
            cout<<names[i]<<": "<<str[j]<<"\n"; i++; j++;
            if(j == 16)
                j = 0;
        }

        if(i == n && j < 16)
        {
            i = 0;
            while(j < 16)
            {
                cout<<names[i]<<": "<<str[j]<<"\n"; i++; j++;
                if(i == n)
                    i = 0;
            }
        }

    return 0;
}
