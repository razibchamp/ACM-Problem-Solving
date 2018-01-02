#include <iostream>
using namespace std;


int main()
{
    int n,intl=0;
    int ind=0;
    int sal[3];
    cin>>n;
    while(intl < n )
    {
        for(int i=0; i<3; i++)
        {
            cin>>sal[i];
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(sal[i]>sal[j])
                {
                    int temp=sal[i];
                    sal[i]=sal[j];
                    sal[j]=temp;
                }
            }
        }
        cout<<"Case "<<intl+1<<": "<<sal[1]<<endl;

        ++intl;
    }
    return 0;
}

