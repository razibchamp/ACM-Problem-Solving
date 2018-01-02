#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int t;
    char word[10];

    cin>>t;
    while(t)
    {
        fflush(stdin);
        int i=0;
        gets(word);

        if(word[i]=='o' && word[1]=='n' && word[2]=='e')
            {cout<<"1"<<endl;}
        else if(word[i]=='o' && word[1]=='n')
            {cout<<"1"<<endl;}
        else if(word[i]=='o' && word[2]=='e')
            {cout<<"1"<<endl;}
        else if(word[1]=='n' && word[2]=='e')
            {cout<<"1"<<endl;}
        else if(word[i]=='t' && word[1]=='w' && word[2]=='o')
            {cout<<"2"<<endl;}
        else if(word[i]=='t' && word[1]=='w')
            {cout<<"2"<<endl;}
        else if(word[i]=='t' && word[2]=='o')
            {cout<<"2"<<endl;}
        else if(word[1]=='w' && word[2]=='o')
            {cout<<"2"<<endl;}
        else if(strlen(word)>3)
            {cout<<"3"<<endl;}
        --t;
    }
    return 0;
}
