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

inline bool isvowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}
string str1, str2 = "ay";
int main()
{
    //r("aa.txt");
    while(getline(cin, str1))
    {
        string str3;
        int i = 0;
        while(str1[i] != '\0')
        {
            if( isvowel(str1[i]))
            {
                while( str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z' )
                {
                    str3 += str1[i];
                    i++;
                }
                str3 += str2 ;
            }
            else if( isalpha(str1[i]) )
            {
                char temp = str1[i];
                i++;
                while( str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z' )
                {
                    str3 += str1[i]; i++;
                }
                str3 += temp + str2;
            }
            else
            {
                str3 += str1[i];
                i++;
            }
        }
        cout<<str3<<endl;
    }
    return 0;
}
