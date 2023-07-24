#include <iostream>
using namespace std;

int main()
{
    //---------------------------Declare Variables----------------------
    double first;
    double second;
    double answer;
    int function;

    //---------------------------Get User Input-------------------------
    cout << "Enter your first number here: ";
    cin >> first; 
    cout << "Enter your second number here: ";
    cin >> second;
    cout << "What function would you like to preform?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> function;
    
    //---------------------------Process User Input---------------------
    if (function == 1) {
        answer = first + second;
        cout << "The sum of your numbers is: " << answer << endl;
    }
    if (function == 2) {
        answer = first - second;
        cout << "The difference of your numbers is: " << answer << endl;
    }
    if (function == 3) {
        answer = first * second;
        cout << "The product of your numbers is: " << answer << endl;
    }
    if (function == 4 && second != 0) {
        answer = first / second;
        cout << "The quotient of your numbers is: " << answer << endl;
    }
    if (function == 4 && second == 0) {
        cout << "You cannot divide by zero." << endl;
    }

    //---------------------------Code to help the program exit "gracefully"-------------------------------
    cin.ignore();
    cout << "Press enter to quit." << endl;
    cin.ignore();
    return 0;
}