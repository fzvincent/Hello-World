//
//  funtemp.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/6.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include "funtemp.hpp"
#include <iostream>
template <typename T>
void Swap(T &a,T &b);

void FunTemp()
{
    using namespace std;
    int i=10;
    int j=20;
    cout<<"i,j"<<i<<","<<j<<".\n";
    cout<<"Using complier-generated int swapper:\n";
    Swap(i,j);
    cout<<"Now i, j="<<i<<", "<<j<<".\n";
    
    double x=24.5;
    double y=100;
    cout<<"x,y"<<x<<","<<y<<".\n";
    cout<<"Using complier-generated int swapper:\n";
    Swap(x,y);
    cout<<"Now x, y="<<x<<", "<<y<<".\n";
}

template <typename T>
void Swap(T &a, T&b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

