//Goal: Write a program which finds the factorial of a number entered by the 
//  user. (check for all conditions)

#include <iostream>
using namespace std;

int main()
{
    int number;

    bool condition = true;
    
    while(condition) {
        cout << "Please enter a number: ";
        cin >> number;
        if ( number < 1 ) {
            cout << "Please enter a number greater than 0." << endl;
        }
        else {
            condition = false;
        }
    }
    
    int answer = 1;
    
    for (int i = 1; i <= number; i++)
    {
        answer *= i;
    }
    cout << answer;
}