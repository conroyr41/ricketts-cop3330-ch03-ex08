#include <iostream>
#include <string>
#include "my_app.h"

using namespace std;

int main()
{
    int input;
    string output = "";

    cout << "\nEnter a whole number and I will tell you if it is odd or even!\n";

    cin >> input;

    if(numberIsEven(input))
    {
        output = "\nYour number is even!\n";
    }
    else
    {
        output = "\nYour number is odd!\n";
    }

    cout << output;

    return 0;
}