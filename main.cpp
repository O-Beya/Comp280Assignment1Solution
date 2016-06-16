//
//  main.cpp
//  Comp280Assignment1Solution
//
//  Created by Olivier on 5/27/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#include <iostream>

#include "List.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //testing constructor, creating an empty List
    List intList;
    
    //will use this variable to take user input for menu choice
    int userInput = 0;
    
    
    //testing if the list is empty or not
    if (intList.Empty())
    {
        cout << "The List is created and is empty at the moment" << endl;
    }
    
    //loop to keep the program runing until user wants to exit (choosing option 6 from the menu)
    while (userInput != 6)
    {
        //printing the menu option
        cout << endl;
        intList.Menu();
        
        //taking user input for the choise of the menu option
        cin >> userInput;
        
        //testing the insert method
        if (userInput == 1)
        {
            int x;
            cout << endl;
            cout << "enter the number you would like to insert into the List: " << endl;
            cin >> x;
            cout << "inserting..." << endl;
            intList.InsertAtEnd(x);
        }
        
        //testing the delete method
        else if (userInput == 2)
        {
            cout << endl;
            cout << "enter the number you would like to delete from the List: " << endl;
            int x;
            cin >> x;
            cout << "Deleting..." << endl;
            intList.Delete(x);
        }
        
        //testing the display method
        else if (userInput == 3)
        {
            //if user select 3 before anything is inserted tell the user the list is still empty
            if (intList.Empty())
            {
                cout << endl;
                cout << "The list is empty, try option 1 to insert a value in the List" << endl;
            }
            
            //display the list
            else if (!intList.Empty())
            {
                cout << endl;
                cout << "Your List is : " << endl;
                intList.Display();
            }
        }
        
        //testing the sum method
        else if(userInput == 4)
        {
            cout << endl;
            cout << "The sum of the list is: " << intList.Sum() << endl;
        }
        
        //testing the average method
        else if (userInput == 5)
        {
            cout << endl;
            cout << "The Average of the list is: " << intList.Average() << endl;
        }
        
        //catching user error. if user enter a number that isn't on the menu option we let the user know
        //it is an invalid option
        else if (userInput != 6)
        {
            cout << "You have entered an invalid option, please try again" << endl;
        }
        
    }
    
    return 0;
}
