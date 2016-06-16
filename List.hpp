//
//  List.hpp
//  Comp280Assignment1Solution
//
//  Created by Olivier on 5/27/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

typedef int ElementType;
const int MAX = 100;

class List{
    
public:
    List(); // create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); // Display the data values in the list in the order inserted
    int Sum(); // Compute and return the sum of the values in the list
    int Average(); // Compute and return the average of the values in the list
    void Menu(); // creates a menu for the user
    
private:
    int N; //number of values in list
    ElementType listArray[MAX]; //the array to hold the list values
};


#endif /* List_hpp */
