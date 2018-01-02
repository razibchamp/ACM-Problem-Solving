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

string str[150];
int arr[100];
int main()
{
    int t, maxval =0, caseNo = 1;
    scanf("%d", &t);
    while(caseNo <= t)
    {
        for(int i=0; i<10; i++)
        {

            cin>> str[i];
            scanf("%d",&arr[i]);
            if(maxval < arr[i])
                maxval = arr[i];
        }
        printf("Case #%d:\n",caseNo);
        for(int i=0; i<10; i++)
        {
            if(maxval == arr[i])
            {
                cout<<str[i]<<endl;
            }
        }
        caseNo++;
        maxval = 0;
    }
    return 0;
}
