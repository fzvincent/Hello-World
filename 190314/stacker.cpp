//
//  stacker.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/14.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <cctype>
#include "stack.hpp"

int Stacker()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout <<"Please enter A to add a purchase order,\n";
    cout <<"P to process a PO, or Q to quit .\n";
    while (cin >>ch && toupper(ch)!='Q')
    {
        while (cin.get()!='\n')
            continue;
        if(!isalpha(ch))
        {
            cout<<'\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':cout<<"Enter a PO number to add: ";
                cin>> po;
                if(st.isfull())
                    cout<<"stack already full\n";
                else
                    st.push(po);
                break;
            case 'p':
            case 'P':
                if(st.isempty())
                    cout<<"stack already empty\n";
                else
                {
                    st.pop(po);
                    cout<<"PO #"<<po<<" popped\n";
                }
                break;
                
        }
        cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit. \n";
        
    }
    cout<<"Bye\n";
    return 0;
}
