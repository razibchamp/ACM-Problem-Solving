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
#define mx 100001
#define infi mx+100;
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = arr[b];
        return;
    }

    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j)
{
    if(b>j || e < i)
        return infi;

    if(b>= i && e <= j)
        return tree[node];

    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    int p1 = query(left, b, mid, i,j);
    int p2 = query(right, mid+1, e, i, j);
    return min(p1,p2);

}

void update(int node, int b, int e, int i, int newValue)
{
    if(b>i || e < i)
        return;
    if(b>= i && e<= i)
    {
        tree[node] = newValue;
        return;
    }


    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    update(left, b, mid, i, newValue);
    update(right, mid+1, e, i, newValue);
    tree[node] = tree[left] + tree[right];
}
int main(){
//    r("in.txt");
//    w("w.txt");

    int t,n,q, cn = 1, i ,j;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &n, &q);
        for(int s = 1; s<=n; s++)
        {
            scanf("%d", &arr[s]);
        }

        init(1, 1, n);
//
//    for(int s = 1; s<=5; s++)
//        printf("%d ", tree[s]);

        printf("Case %d:\n", cn++);
        for(int s = 0; s<q; s++)
        {
            scanf("%d%d", &i, &j);
            printf("%d\n", query(1, 1, n, i, j));
        }

    }




	return 0;
}
/*
2

5 3
78 1 22 12 3
1 2
3 5
4 4

1 1
10
1 1
*/
