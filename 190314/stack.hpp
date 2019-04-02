//
//  stack.hpp
//  Hello World
//
//  Created by Vincent Yu on 2019/3/14.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
int Stacker();

typedef unsigned long Item;
class Stack
{
private:
    enum{ MAX=10 };
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    
};
#endif /* stack_hpp */
