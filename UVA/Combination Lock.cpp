#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int pos_dial, first_num, scnd_num , thrd_num;
    while(true)
    {
        int deg=0;
        scanf("%d %d %d %d", &pos_dial, &first_num , &scnd_num, &thrd_num);
        int val = abs(pos_dial - first_num);
        if(pos_dial ==0 && first_num==0 , scnd_num==0, thrd_num==0)
        {
            break;
        }
        else
        {
            if(val == 10)
            {
                cout<<(360*4) + 450<<endl;
            }
            else if(val == 20)
            {
                cout<<(360*4) + 180<<endl;
            }
            else if(val == 30)
            {
                cout<<(360*3) + 270<<endl;
            }
        }
    }
    return 0;
}
