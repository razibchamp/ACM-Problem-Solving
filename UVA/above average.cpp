#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, num_stud, val , score_stud[1000];
    float percntge;

    cin>>t;
    while(t)
    {
        float count=0,sum=0;
        float f;
        cin>>num_stud;
        float n= num_stud;
        for(int i=0; i<num_stud; i++)
        {
            cin>>val;
            score_stud[i]=val;
            sum = sum + val;
        }

        for(int j=0; j<num_stud; j++)
        {
            if(score_stud[j] > sum/num_stud )
            {
                ++count;
            }
        }
        f= count/n;
        percntge= f*100;
        printf("%.3f%%\n",percntge);
        --t;
    }
    return 0;
}
