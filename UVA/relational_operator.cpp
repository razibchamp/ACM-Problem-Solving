#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, fst,scnd;

    cin>>t;
    while(t>0)
    {
        cin>>fst>>scnd; //Scan for two integers

        if(fst<scnd)
        {
            cout<<"<"<<endl;
        }
        else if(fst>scnd)
        {
            cout<<">"<<endl;
        }
        else if(fst==scnd)
        {
            cout<<"="<<endl;
        }

        --t;
    }
    return 0;
}
