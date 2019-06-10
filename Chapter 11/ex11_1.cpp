//
//  ex11_1.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/4/10.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ex11.hpp"
int ex11_1()
{
    using namespace std;
    using VECTOR::Vector;
    srand((unsigned int)time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps=0;
    double target=100;
    double dstep=20;
    cout<<"Target Distace: "<<target<<", Step Size: "<<dstep<<endl;
    
    
    while (result.magval()<target)
    {
        cout<<steps<<": "<<result<<"\n"<<endl;
        direction=rand()/360;
        step.reset(dstep, direction, Vector::POL);
        result=result+step;
        steps++;
    }
    
    cout<<"After "<<steps<<"steps, the subject has the following location:\n";
    cout<<result<<endl;
    result.polar_mode();
    cout<<" or\n"<<result<<endl;
    cout << "Average outward distance per step ="<<result.magval()/steps<<endl;
    steps=0;
    result.reset(0.0, 0.0);
    
    
    
    return 0;
}
