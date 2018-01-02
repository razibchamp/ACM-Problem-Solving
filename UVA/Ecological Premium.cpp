#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    float space_frmyrd, num_anmls, envrmnt;
    float sum=0;
    float fnl_premium;
    float num_farmers;

    cin>>n;
    while(n>0)
    {
        cin>>num_farmers;
        sum=0;
        while(num_farmers>0)
        {
            cin>>space_frmyrd>>num_anmls>>envrmnt;

            fnl_premium = ((space_frmyrd/num_anmls)*envrmnt)*num_anmls;
            sum = sum+fnl_premium;
            --num_farmers;
        }
        cout<<sum<<endl;
        --n;
    }
    return 0;
}
