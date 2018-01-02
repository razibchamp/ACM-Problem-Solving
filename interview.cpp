#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int a,b,n, maxa = 0, maxb = 0;

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a);
        maxa |= a;
    }

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &b);
        maxb |= b;
    }



    printf("%d",maxa + maxb );
    return 0;
}
