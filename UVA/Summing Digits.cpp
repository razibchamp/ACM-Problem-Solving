#include<iostream>
using namespace std;
int main()
{
    int n;
    int fnl;
    int sum=0;

    while(cin>>n)
    {

        sum=n;

        if(n==0)
        {
            break;
        }
        while(true)
        {

            if(sum<10)
            {
                cout<<sum<<endl;
                break;
            }
            else
            {
                fnl=(sum%10)+(sum/10);
                sum =fnl;
            }
        }
    }

    return 0;
}
