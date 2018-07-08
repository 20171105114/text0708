//
//  main.cpp
//  text0708
//
//  Created by lishuxin on 2018/7/8.
//  Copyright © 2018年 lishuxin. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    double ava;
    double *pn;
    int ix;
    pn = new double[ix];
    cout<<"输入评委个数" <<endl;
    cin>>ix;
    cout<<"依次输入评委打分" <<endl;
    for(int i=0;i<ix;i++)
    {
        cin>>pn[i];
    }
    double max = pn[0];
    double min = pn[0];
    for(int i=0;i<ix;i++)
    {
        if(max < pn[i])
        {
            max = pn[i];
        }
        if(min > pn[i])
        {
            min = pn[i];
        }
        ava = ava + pn[i];
    }
    ava = (1.0*ava - 1.0*min - 1.0*max)/(ix - 2.0);
    cout<<"去掉最高分和最低分后的平均分"<<endl;
    cout<<ava<<endl;
    delete []pn;
    return 0;
}
