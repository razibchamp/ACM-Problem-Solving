#include <bits/stdc++.h>
int n,b,p;


int cal()
{
    int sum = 0;
    int m = n,k = 0;
    while(true)
    {
        sum += (m/2)*2*b + (m/2);
        k = m - (m/2)*2;
        k += m/2;
        m = k;
        if(m == 1) break;
    }

    return sum;
}
int main()
{
    scanf("%d%d%d", &n,&b, &p);

    printf("%d %d\n", cal(), p*n);
    return 0;
}
