

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ex11.hpp"
int ex11_1()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps=0;
    double target=100;
    double dstep=20;
    int times=0;
    int top=0;
    int low=0;
    int N;
    
    cout<<"Target Distace: "<<target<<", Step Size: "<<dstep<<endl;
    cout<<"How many times will be tested: ";
    cin>>N;
    while (times<N)
    {
        while (result.magval()<target)
        {
            cout<<steps<<": "<<result<<"\n"<<endl;
            direction=rand()/360;
            step.reset(dstep, direction, Vector::POL);
            result=result+step;
            steps++;
        }
        if (steps>top) {
            top= int(steps);
        }
        if (times==0) {
            low=int(steps);
        }
        else if (steps<low)
        {
            low=int(steps);
        }
        times++;
        
        cout<<"After "<<steps<<"steps, the subject has the following location:\n";
        cout<<result<<endl;
        result.polar_mode();
        cout<<" or\n"<<result<<endl;
        cout << "Average outward distance per step ="<<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0, 0.0);
        cout<<"top="<<top<<", low="<<low;
    }

    
    
    
    return 0;
}
