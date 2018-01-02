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
#define EPS 1e-12
int bin(int n)
{
    int b = 0;
    int arr[32];
    int i = 0;
    while(n > 0)
    {
        arr[i] = n%2;
        n /= 2;
        i++;

    }

    for(--i; i>=0; i--)
    {
        b = b*10 + arr[i];
    }

    return b;
}
int main(){
//    r("in.txt");
//    w("w.txt");



    int t, cn = 1,n;
    double arr[1010];
    int seq[1010];
    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d", &n);
        int time, fine;

        for(int i=0; i<n; i++)
        {
            scanf("%d%d", &time, &fine);
            arr[i] = (double)fine/time;
            seq[i] = i+1;
        }

        for(int i = 0; i<n-1; i++)
        {
            for(int j = 0; j<n-1-i; j++)
            {

                if(abs(arr[j] - arr[j+1]) < EPS && seq[j] > seq[j+1])
                {
                   // printf("J: %lf I: %lf\n", arr[j], arr[j+1]);
                    int tmpseq = seq[j+1];
                    seq[j+1] = seq[j];
                    seq[j] = tmpseq;

                    double tmpfine = arr[j+1];
                    arr[j+1]= arr[j];
                    arr[j] = tmpfine;
                }
                else if(arr[j] < arr[j+1])
                {
                    //printf("J: %lf I: %lf\n", arr[j], arr[j+1]);
                    int tmpseq = seq[j+1];
                    seq[j+1] = seq[j];
                    seq[j] = tmpseq;

                    double tmpfine = arr[j+1];
                    arr[j+1]= arr[j];
                    arr[j] = tmpfine;
                }
            }
        }

        if(cn > 1)
        {
            printf("\n");
        }
        for(int i = 0; i<n; i++)
        {
            if(i > 0)
                printf(" ");
            printf("%d", seq[i]);
        }

        printf("\n");
        cn++;

    }
	return 0;
}
