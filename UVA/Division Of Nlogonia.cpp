#include <iostream>
using namespace std;

int main()
{
    int t, div_pnt_n, div_pnt_m, cor_res_x, cor_res_y;


    while(true)
    {
        cin>>t;
        if(t==0)
        {
            break;
        }

        int k=t;
        cin>>div_pnt_n>>div_pnt_m;
        while(k)
        {
            cin>>cor_res_x>>cor_res_y;
            if(cor_res_x==div_pnt_n || cor_res_y==div_pnt_m)
                {cout<<"divisa"<<endl;}
            else if(cor_res_x>div_pnt_n && cor_res_y > div_pnt_m)
                {cout<<"NE"<<endl;}
            else if(cor_res_x<div_pnt_n && cor_res_y < div_pnt_m)
                {cout<<"SO"<<endl;}
            else if(cor_res_x<div_pnt_n && cor_res_y>div_pnt_m)
                {cout<<"NO"<<endl;}
            else if(cor_res_x > div_pnt_n && cor_res_y < div_pnt_m)
                {cout<<"SE"<<endl;}
            --k;
        }


    }
    return 0;
}
