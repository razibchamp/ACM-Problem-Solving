#include <iostream>
using namespace std;

int main()
{
    int t;

    cin>>t;
    for(int i=1; i<=t ; i++)
    {
        int len,wid,ht;

        cin>>len>>wid>>ht;

        if(len<=20 && wid<=20  && ht<=20)
        {
            cout<<"Case "<<i<<": "<<"good"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        }
    }

    return 0;
}
