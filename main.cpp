/*
Program: Math Tutor V1
Authors: Amber Vinsonhaler & Pedro Presidio
Date: 09/07/2026
Description: A simple math program, with 3 fun facts about math and a basic addition problem.
*/
#include <iostream>
using namespace std;

int main() {
    // Creating and initializing variables for the math tutor program
    int leftNum = 2;
    int rightNum = 3;
    int resultMath = 0;
    string userName = "";

    // Displaying the program title in ASCII art
    cout << R"( __  __       _   _       _         _             _
|  \/  | __ _| |_| |__   | |_ _   _| |_ ___  _ __| |
| |\/| |/ _` | __| '_ \  | __| | | | __/ _ \| '__| |
| |  | | (_| | |_| | | | | |_| |_| | || (_) | |  |_|
|_|  |_|\__,_|\__|_| |_|  \__|\__,_|\__\___/|_|  (_) )" << "\n" << endl;

    cout << "+--------------------------------------------+" << endl;
    cout << "|   Welcome to the Silly Little Math Tutor   |" << endl;
    cout << "+--------------------------------------------+" << endl;

    // Display some math facts to the user
    cout << "Fun math facts:\n" << endl;
    cout << " > If you fold a paper 42 times you can reach the moon;" << endl;
    cout << " > 2,520 is the smallest number that can be evenly divided by every single number from 1 through 10;" << endl;
    cout << " > Zero was invented in India.\n" << endl;

    // Ask user input for their name
    cout << "What is your name? ";
    cin >> userName;

    cout << "Welcome " << userName << " to the Silly Little Math Tutor!" << endl;
    // Using the variables ask the user to solve a math problem
    cout << "What is " << leftNum << " + " << rightNum << " = ";
    cin >> resultMath;

    cout << "Sorry this is all the program does for the moment." << endl;
    cout << "Version 2 is coming soon!" << endl;
    cout << "End of program." << endl;
    return 0;
}