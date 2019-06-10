//
//  Hashsort.cpp
//  Hello World
//
//  Created by Vincent Yu on 2019/5/21.
//  Copyright © 2019 Vincent Yu. All rights reserved.
//

#include "sort.hpp"

using namespace std;
void sortUsingHash(int a[], int n)
{
   // using namespace std;
    // find the maximum element
    int max = *std::max_element(a, a + n);
    ;
    ;
    cout<<max;
    // create a hash function upto the max size
    int hash[20 + 1] = { 0 };
    vector<int> ash(max+1);
    cout<<hash<<endl;
    // traverse through all the elements and
    // keep a count
    for (int i = 0; i < n; i++)
        hash[a[i]] += 1;
    
    // Traverse upto all elements and check if
    // it is present or not. If it is present,
    // then print the element the number of times
    // it's present. Once we have printed n times,
    // that means we have printed n elements
    // so break out of the loop
    for (int i = 0; i <= max; i++) {
        
        // if present
        if (hash[i]) {
            
            // print the element that number of
            // times it's present
            for (int j = 0; j < hash[i]; j++) {
                cout << i << " ";
            }
            
        }
        
    }
    cout<< "\n" <<endl;
    for (int i = 0; i < n; i++)
        ash[a[i]] += 1;
    
    // Traverse upto all elements and check if
    // it is present or not. If it is present,
    // then print the element the number of times
    // it's present. Once we have printed n times,
    // that means we have printed n elements
    // so break out of the loop
    for (int i = 0; i <= max; i++) {
        
        // if present
        if (ash[i]) {
            
            // print the element that number of
            // times it's present
            for (int j = 0; j < ash[i]; j++) {
                cout << i << " ";
            }
          
        }
    }
} 

