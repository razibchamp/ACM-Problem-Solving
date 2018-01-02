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
#define leftNode  node*2
#define rightNode node*2 + 1

struct node{

    long long sum;
    long long lazy;
    node()
    {
        sum = 0;
        lazy = 0;
    }
};

int arr[mx];
node tree[mx * 3];

void updateNode(int node, int b, int e, int v)
{
    tree[node].sum += ((e-b)+1)*v;
    tree[node].lazy += v;
}

void updateChild(int node, int b, int e, int v)
{
    updateNode(leftNode, b, (b+e)/2, tree[node].lazy);
    updateNode(rightNode, ((b+e)/2) + 1, e , tree[node].lazy);
    tree[node].lazy = 0;
}

void init(int node, int b, int e)
{
    if(b == e)
    {
        tree[node].sum = arr[b];
        return;
    }

    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

long long query(int node, int b, int e, int i, int j)
{
    if(b>j || e < i)
        return 0;

    if(b>= i && e <= j)
        return tree[node].sum;

    if(tree[node].lazy != 0)
    {
        updateChild(node, b, e,  tree[node].lazy);
    }

    int mid = (b+e)/2;
    long long p1 = query(leftNode, b, mid, i,j);
    long long p2 = query(rightNode, mid+1, e, i, j);
    return p1+p2;

}

void update(int node, int b, int e, int i, int j, int newValue)
{
    if(b>j || e < i)
        return;
    if(b>= i && e<= j)
    {
        updateNode(node, b, e, newValue);
        return;
    }

    int mid = (b+e)/2;
    if(tree[node].lazy != 0)
    {
        updateChild(node, b, e,  tree[node].lazy);
    }

    update(leftNode, b, mid,i,j, newValue);
    update(rightNode, mid+1, e,i,j, newValue );

    tree[node].sum = tree[leftNode].sum + tree[rightNode].sum;
}

int main()
{
//    r("in.txt");
//    w("w.txt");

    int t,n,q, cn = 1, i ,j;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &n, &q);
        for(int s = 0; s<n; s++)
        {
            arr[s] = 0;
        }

        for(int s = 0; s<mx*3; s++)
        {
            tree[s].sum = 0;
            tree[s].lazy = 0;
        }

        init(1, 0, n-1);

        printf("Case %d:\n", cn++);
        for(int s = 0; s<q; s++)
        {
            int val;
            scanf("%d", &i);
            if(i == 0)
            {
                scanf("%d%d%d", &i, &j, &val);
                update(1, 0, n - 1, i, j, val);
            }
            else if( i == 1)
            {
                scanf("%d%d", &i, &j);
                printf("%lld\n", query(1,0,n-1, i, j));
            }
        }

    }

}



