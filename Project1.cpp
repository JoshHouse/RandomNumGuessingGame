// Joshua House
// CSCI 1010 MWF 1:00-1:50
// Project 1
// Number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    // Setting the seed as time to get a random number every time and declaring variables
    srand(time(0));
    int num, choice, contstop;
    
    // Infinite loop to make the code repeat continuously
    for(int i = 0; i > -1; i++)
    {
        // Menu
        cout << "**** Welcome to the game ****" << endl;
        cout << "1. Start the game" << endl;
        cout << "2. Exit the game" << endl;
        cin >> contstop;
        
        // code to break infinite loop if that menu option is selected
        if(contstop != 1)
        {
            break;
        }
        // Code to play the game
        else if(contstop == 1)
        {
            // ensures number is stays within 1-100
            num = rand() % 101;

            // For loop repeats 10 times to give the player 10 tries
            for(int n = 0; n < 10; n++)
            {
                // Get the players guess
                cout << "Please enter a number: ";
                cin >> choice;
                
                // if, else if, and else statements to compare the players guess to the random value and cout to give feedback
                if(choice == num)
                {
                    cout << "You got it!" << endl;
                    break;
                }
                else if(choice > num)
                {
                    cout << "Too high!" << endl;
                }
                else
                {
                    cout << "Too low!" << endl;
                }
            }
        }
        // checking to see if, after the 10 turns, if their choice still doesnt = the number, to tell them they ran out of turns
        if(choice != num)
        {
            cout << "You ran out of turns";
        }
    }
}