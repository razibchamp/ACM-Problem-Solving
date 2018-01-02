#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int hash,opp;

    while(cin>>hash>>opp)
    {
        cout<<abs(hash-opp)<<endl;
    }
    return 0;
}
