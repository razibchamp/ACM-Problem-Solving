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

int isPrime(int num)
{
    int sqrtN = int ( sqrt( (double) num));
    if(num == 2)
        return 1;
    if(num%2 == 0)
        return 0;
    for(int i = 3; i <= sqrtN; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int sum = 0;
char str[50];
int main()
{
    while(gets(str))
    {
        int i = 0;
        sum = 0;
        int len = strlen(str);
        while(i < len)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                sum += str[i] - 38;
            }
            else
            {
                sum += str[i] - 96;
            }
            i++;
        }
        if(isPrime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
