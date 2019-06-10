//
//  sort.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/5/21.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include <stdio.h>
#include "sort.hpp"
//#include "Hashsort.cpp"

int sort()
{
    int a[] = { 9, 4, 3, 2, 5, 2, 1, 0, 4,
        3, 5, 10, 15, 12, 18, 20, 19 };
    int n = sizeof(a) / sizeof(a[0]);
    
    sortUsingHash(a, n);
    return 0;
    
}
