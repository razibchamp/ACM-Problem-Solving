#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[10];

    int t=1;
    while(true)
    {
        int i=0;
        gets(s);
        if(s[i]=='*')
            {break;}
        if(s[i]=='H')
            {cout<<"Case "<<t<<": Hajj-e-Akbar"<<endl;}
        else if(s[i]=='U')
            {cout<<"Case "<<t<<": Hajj-e-Asghar"<<endl;}
        ++t;

    }
    return 0;
}
