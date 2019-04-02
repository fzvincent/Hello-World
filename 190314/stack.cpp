//
//  stack.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/14.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include "stack.hpp"

Stack::Stack()
{
    top=0;
}
bool Stack::isempty()const
{
    return top==0;
}
bool Stack::isfull()const
{
    return top==MAX;
}
bool Stack::push(const Item &item)
{
    if(top<MAX)
    {
        items[top++]=item;
        return true;
    }
    else
        return false;
    
}
bool Stack::pop(Item & item)
{
    if(top>0)
    {
        item=items[--top];
        return true;
        
    }
    else
    {
        return false;
    }
}
