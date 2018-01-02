#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[14];
    char en[]={"HELLO"}, sp[]={"HOLA"}, ger[]={"HALLO"};
    char fre[]={"BONJOUR"}, ita[]={"CIAO"}, rus[]={"ZDRAVSTVUJTE"};

    int t=1,i=0;

    while(t)
    {

        gets(s);
        if(s[i]=='#')
            {break;}
        if(strcmp(s,en)==0)
            { cout<<"Case "<<t<<": ENGLISH"<<endl;}
        else if(strcmp(s,sp)==0)
            { cout<<"Case "<<t<<": SPANISH"<<endl;}
        else if(strcmp(s,ger)==0)
            { cout<<"Case "<<t<<": GERMAN"<<endl;}
        else if(strcmp(s,fre)==0)
            { cout<<"Case "<<t<<": FRENCH"<<endl;}
        else if(strcmp(s,ita)==0)
            { cout<<"Case "<<t<<": ITALIAN"<<endl;}
        else if(strcmp(s,rus)==0)
            { cout<<"Case "<<t<<": RUSSIAN"<<endl;}
        else
            { cout<<"Case "<<t<<": UNKNOWN"<<endl;}

        ++t;
    }
    return 0;
}
