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

    int n,ctr = 0;
    int row[101] ={0}, col[101] ={0};
    scanf("%d", &n);
    getchar();
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {

            char ch;
            scanf("%c", &ch);

            if(ch == 'C')
            {
                row[i]++; col[j]++;
                //cout<<row[i]<<" "<<col[j]<<"\n";
            }

            if(row[i] >= 2)
            {
                ctr++; row[i] -=2;
            }
            else if(col[j] >= 2)
            {
                ctr++; col[j] -= 2;
            }
        }
        getchar();
    }
    printf("%d\n", ctr);
	return 0;
}
