#include <iostream>
#include <cmath>
using namespace std;

//int differ(int a[],int size)
//{
//    int diff=a[size-1]-a[0];
//
//    return diff;
//}

int main()
{
    int t,no_store, pos_store[20],sum=0;

    cin>>t;
    while(t>0)
    {
        cin>>no_store;
        for(int i=0; i<no_store; i++)
        {
            cin>>pos_store[i];
        }

        for(int i=0; i<no_store; i++)
        {
            for(int j=i+1; j<no_store; j++)
            {
                if(pos_store[i]>pos_store[j])
                {
                    int temp = pos_store[i];
                    pos_store[i]=pos_store[j];
                    pos_store[j]=temp;
                }
            }
        }
        int diff=pos_store[no_store-1]-pos_store[0];
        int min_dis=diff*2;
        cout<<min_dis<<endl;

        --t;
    }
    return 0;
}



