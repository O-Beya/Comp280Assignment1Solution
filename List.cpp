//
//  List.cpp
//  Comp280Assignment1Solution
//
//  Created by Olivier on 5/27/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#include "List.hpp"
#include <iostream>
using namespace std;

//constructor creating an empty list
List::List()
{
    N = 0;
}

//empty method checking to see if the list is empty
bool List::Empty()
{
    return N == 0;
}

//insertatend method inserting an element x at the end of the list
void List::InsertAtEnd(ElementType x)
{
    //if the list is full telling the user the list is full
    if (N == MAX)
    {
        cerr << "*** There is no more space in this list -- Terminating"
        "execution ***\n";
    }
    
    //inserting x at the end of the list (at index N)
    else
    {
        listArray[N] = x;
        N++;
    }
    
}

//delete method delete a chosen element x by the user
void List::Delete(ElementType x)
{
    //telling the user if the list is empty. there is nothing to be removed.
    if (N == 0)
    {
        cerr << "*** This list is empty -- List Unchanged";
    }
    
    //going through the entire list check if the element at index i is the element x we want to remove
    //then once we find x starting from i shift all element after i one index to the left
    // and decrement the list.
    for (int i = 0; i < N; i++)
    {
        if (x == listArray[i])
        {
            for (int j = i; j < N-1;j++ )
                listArray[j] = listArray[j + 1];
            
            N--;
            break;
        }
        
    }
}

//display method, displaying the list
void List::Display()
{
    for (int i = 0; i < N; i++)
        cout << listArray[i] << endl;
}

//calculate and return the sum of elements in the list
int List::Sum()
{
    int listSum = 0;
    
    for (int i = 0; i < N; i++)
    {
        listSum = listSum + listArray[i];
    }
    
    return listSum;
}

//calculate and return the average of all elements in the list using the sum() method created above.
int List::Average()
{
    return Sum()/N;
}

//this method creates a menu for the user.
void List::Menu()
{
    cout << endl;
    cout << "Please chose a number from the option menu" << endl;
    cout << endl;
    cout << "Options:" << endl
    << "-------" << endl
    << "1. Insert" << endl
    << "2. Delete" << endl
    << "3. Display" << endl
    << "4. Sum" << endl
    << "5. Average" << endl
    << "6. Exit" << endl;
}



