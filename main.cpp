/*
Program: Math Tutor V1
Authors: Amber Vinsonhaler & Pedro Presidio
Date: 09/07/2026
Description: A simple math program, with 3 fun facts about math and a basic addition problem.
*/
#include <iostream>
#include <random>
using namespace std;

int main() {
    // Generates random number between 0 - 10
    srand(static_cast<unsigned int>(time(0)));

    // Creating and initializing variables for the math tutor program
    unsigned int leftNum = rand() % 10; // random with the limitation to 10
    int rightNum = rand() % 10; // random with the limitation to 10
    int resultMath = 0;
    int userAnswer = 0;
    int mathType = rand() % 4;
    int temp = 0;
    char mathSymbols;
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

    // Getting user name with getline
    cout << "What is your name? ";
    getline(cin, userName);

    cout << "Welcome " << userName << " to the Silly Little Math Tutor!" << endl;
    // Using the variables ask the user to solve a math problem

    switch (mathType) {
        case 1:
            mathSymbols = '+';
            resultMath = leftNum + rightNum;
            break;
        case 2:
            mathSymbols = '-';
            if (leftNum < rightNum) {
                temp = leftNum;
                leftNum = rightNum;
                rightNum = temp;
            }
            resultMath = leftNum - rightNum;
            break;
        case 3:
            mathSymbols = '*';
            resultMath = leftNum * rightNum;
            break;
        case '/':
            mathSymbols = '/';
            resultMath = leftNum;
            leftNum *= rightNum;
            break;
        default:
            cout << "Invalid question type: " << mathType << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Debbie Johnson." << endl;
            return -1;
    }

    

    cout << userName << ", what is " << leftNum << mathSymbols << rightNum << "?";
    cin << userAnswer << endl;

    cout << "Sorry this is all the program does for the moment." << endl;
    cout << "Version 2 is coming soon!" << endl;
    cout << "End of program." << endl;
    return 0;
}