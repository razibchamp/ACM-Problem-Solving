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

#define pi 2*acos(0.0)
#define r(a) freopen(a, "r", stdin)
#define w(a) freopen(a, "w", stdout)
#define vi vector<int>
#define leftNode node*2
#define rightNode node*2 + 1
#define mid ((b+e)/2)
#define mx 100001

int sacks[mx];
int tree[mx * 3];

/*segment tree */

void init(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = sacks[b];
        return;
    }

    init(leftNode, b, mid);
    init(rightNode, mid+1, e);

    tree[node] = tree[leftNode] + tree[rightNode];

}

void update1(int node, int b, int e, int i, int val)
{
    if(b > i || e < i)
        return;
    if(b>= i && e <= i)
    {
        printf("%d\n", tree[node]);
        tree[node] = val;
        return;
    }


    update1(leftNode, b, mid, i, val);
    update1(rightNode, mid+1, e, i, val);
    tree[node] = tree[leftNode] + tree[rightNode];

}

void update2(int node, int b, int e, int i, int val)
{
    if(b > i || e < i)
        return;
    if(b>= i && e <= i)
    {
        tree[node] += val;
        return;
    }

    update2(leftNode, b, mid, i, val);
    update2(rightNode, mid+1, e, i, val);
    tree[node] = tree[leftNode] + tree[rightNode];

}


int query(int node, int b, int e, int i, int j)
{
    if(b > j || e < i)
        return 0;
    if(b >= i && e <= j)
        return tree[node];

    int p1 = query(leftNode, b, mid, i, j);
    int p2 = query(rightNode,mid+1, e,i, j);

    return p1+p2;

}

//int binSearch(int arr[10], int low, int hi, int val)
//{
//    if(low > hi) return -1;
//
//    int mid = (low+hi)/2;
//    printf("Bla BLa");
//    if(arr[mid] == val) return mid;
//    else if(arr[mid] < val)
//    {
//        return binSearch(arr, mid+1, hi, val);
//    }
//    else
//    {
//        return binSearch(arr, low, mid, val);
//    }
//
//}

int main(){
//    r("in.txt");
//    w("w.txt");

    int t, n,cn = 1, q, i, j, k, v;

    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &n, &q);

        for(int i = 0; i<n; i++)
            scanf("%d", &sacks[i]);

        init(1, 0, n-1);

        printf("Case %d:\n", cn++);

        while(q--)
        {
            scanf("%d", &k);

            if(k == 1)
            {
                scanf("%d", &i);
                update1(1, 0, n-1, i, 0);
            }
            else if(k == 2)
            {
                scanf("%d%d", &i, &v);
                update2(1, 0, n-1, i, v);
            }
            else
            {
                scanf("%d%d", &i, &j);
                printf("%d\n", query(1, 0, n-1, i, j));
            }
        }
    }


	return 0;
}

