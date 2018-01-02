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
int curr;
struct Rect{

    int leftX, rightX, height;

    Rect()
    {

    }
    Rect(int left,int height , int right)
    {
        this->leftX = left;
        this->rightX = right;
        this->height = height;
    }
};


Rect nextBig(int currRect, int len, Rect (&rect)[5001])
{
    Rect maxRect(0,0,0);
    int ctr = 0;
    int i;
    for(i = currRect+1; i<len; i++)
    {
        if(rect[i].leftX <= rect[currRect].rightX && rect[i].leftX > maxRect.leftX)
        {
             maxRect = rect[i]; ctr++;
        }
        else
            break;

    }

    curr = i - 1;
    if(ctr == 0)
    {
        return Rect(0,-1,0);
    }
    else
        return maxRect;
}


void print(Rect (&rect)[5001], int len)
{
    curr = 0;
    printf("%d %d", rect[curr].leftX, rect[curr].height);
    while(curr < len)
    {
        Rect r = nextBig(curr, len, rect);

        if(r.height == -1)
        {
            printf(" %d 0", rect[curr].rightX); curr++;
            if(curr < len)
                printf(" %d %d", rect[curr].leftX, rect[curr].height); // after putting zero it will again start like the first one
            else break;
        }
        else
        {
            printf(" %d %d", r.leftX, r.height);
            //curr++;
        }

    }
}
 int main()
{
    //w("w.txt");
    Rect rect[5001];

    int l,r,h, i = 0;
    while(scanf("%d%d%d", &l, &h, &r) == 3)
    {

        rect[i].leftX = l;
        rect[i].height = h;
        rect[i].rightX = r;
        i++;
    }

    print(rect, i);

    return 0;
}
