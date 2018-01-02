#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int val = (((((((n*567)/9)+7492)*235)/47)-498)%100)/10;

        if(val<0)
        {
            val=abs(val);
        }
        cout<<val<<endl;
        --t;
    }

    return 0;
}
