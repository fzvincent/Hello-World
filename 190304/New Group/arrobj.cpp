//
//  arrobj.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/5.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include "arrobj.hpp"
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons=4;
const array<string,Seasons> Sanmes={"Spring","Summer","Fall","Winter"};

void fill(array<double,Seasons>*pa)
{
    for (int i=0;i<Seasons;i++)
    {
        cout<<"Enter"<<Sanmes[i]<<" expenses:";
        cin>>(*pa)[i];
    }
}

void show(array<double,Seasons>da)
{
    long total=0;
    cout<<"\nExpense\n";
    for(int i=0;i<Seasons;i++)
    {
        cout<<Sanmes[i]<<":"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"total expense: "<<total<<endl;
    
}

void arrobj()
{
    array<double,Seasons>expenses;
    fill(&expenses);
    show(expenses);
}
