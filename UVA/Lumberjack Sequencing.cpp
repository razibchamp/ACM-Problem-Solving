#include <iostream>
using namespace std;

int main()
{
    int t;

    cin>>t;
    //if(t==0)
    //    return 0;
    cout<<"Lumberjacks:"<<endl;
    while(t)
    {
        int a=0,arr[10], flag=1; //if returns flag = 0 then it is unordered

        for(int i=0; i<10; i++)
        {
            cin>>arr[i];
        }

        if(arr[0]<arr[1])
        {
            for(int k=1; k<9; k++)
            {
                if(arr[k] > arr[k+1])
                {
                    flag=0;
                    break;
                }
            }
        }
        else if(arr[0] > arr[1])
        {
            for(int k=1; k<9; k++)
            {
                if(arr[k] < arr[k+1])
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==0)
        {
            cout<<"Unordered"<<endl;
        }
        else
        {
            cout<<"Ordered"<<endl;
        }

        --t;
    }
    return 0;
}
