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
#include <fstream>
#include <iomanip>
#include <cstdio>
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

class FileReader
{
private:
    int arr[100], len = 0;
public:
    void read()
    {
        ifstream fin("record.txt");
        int i = 0,a;
        while(fin>>a)
        {
            arr[i++] = a;
        }
        len = i;
    }
    void print()
    {
        for(int i = 0; i<len; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main()
{
    //ios::sync_with_stdio(false);
    FileReader f;
    f.read();
    f.print();
    return 0;
}


