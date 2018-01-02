//                     *** In The Name Of Allah ***

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

int bigMod(int num, int pow, int mod)
{
    if(pow == 0)
        return 1;
    if(pow == 1)
    {
        return num%mod;
    }
    if(pow%2 == 0)
    {
        int n = pow/2;
        return ( ( bigMod(num, n, mod) * (bigMod(num, n, mod)) ) ) % mod;
    }
    else
    {
        int nn = pow - 1;
        return ( bigMod(num, 1, mod) * bigMod(num, nn, mod) ) % mod;
    }
}

int BigModRec(int a, int p, int m) {
	int res = 1;
	//cout << p << endl;
	if (p == 0) return 1;
	if (p == 1) return a%m;
	if (p & 1) res = ((long long)a*BigModRec(a, p - 1, m))%m;
	else {
		res = BigModRec(a, p / 2, m);
		res=(long long)res* res;
		res = (res%m);
	}
	return res;
	//cout << res << endl;
}

int main()
{
    int finMod, num,pow,mod;
    while(true)
    {
        scanf("%d%d%d",&num,&pow,&mod);
        if(num == 0 && pow == 0 && mod == 0)
            break;
        finMod = bigMod(num, pow, mod);
        printf("Your Mod Is: %d\n",finMod);
    }
    return 0;
}
