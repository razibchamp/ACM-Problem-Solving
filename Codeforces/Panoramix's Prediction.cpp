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
#define valid(i, j, m, n) (i>=m && i<=n) && (j>=m && j<=n)

int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};


int arr[50];
bool isPrime(int num)
{
    int sqrtN = (int) sqrt((double)num);

    for(int i = 2; i<= sqrtN; i++)
    {
        if(num%i == 0) return false;
    }
    return true;
}

void preCalc()
{
    int idx = 0;
    for(int i = 2; i<= 50; i++)
    {
        if(isPrime(i) == true)
        {
            arr[idx] = i;
            idx++;
        }
    }
}


int searchN(int n)
{

    for(int i = 0; i<50; i++)
    {
        if(arr[i] == n) return i;
    }
}
bool nextPrime(int n, int m)
{
    int idx = searchN(n);

    if(arr[idx+1] == m)
        return true;
    else
        return false;
}

int main()
{
    //w("w.txt");

    preCalc();

    int n,m;

    cin>>n>>m;

    if(nextPrime(n,m) == true)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
