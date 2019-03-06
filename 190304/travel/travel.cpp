//
//  travel.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/4.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include "travel.hpp"
#include <iostream>
struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr=60;
travel_time Sum(travel_time t1, travel_time t2 );
void Show_time (travel_time t);

void Travel()
{
    using namespace std;
    travel_time day1={5,45};
    travel_time day2={4,55};
    travel_time trip=Sum(day1,day2);
    cout << "Two-day totoal: ";
    Show_time(trip);
    
    travel_time day3={4,32};
    cout <<"Three-day total: ";
    Show_time(Sum(trip,day3));
    
}

travel_time Sum(travel_time t1,travel_time t2)
{
    travel_time total;
    total.mins=(t1.mins+t2.mins)%Mins_per_hr;
    total.hours=t1.hours+t2.hours+(t1.mins+t2.mins)/Mins_per_hr;
    return total;
}

void Show_time(travel_time t)
{
    using namespace std;
    cout<<t.hours<<"hours,"<<t.mins<<"minuts\n";
    
}
