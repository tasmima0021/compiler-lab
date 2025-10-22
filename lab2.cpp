#include <iostream>
using namespace std;


void findOperators(string input)
{
    cout << "Operators found:" << endl;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '+')
            cout << "operator: +" << endl;
        else if (input[i] == '-')
            cout << "operator: -" << endl;
        else if (input[i] == '*')
            cout << "operator: *" << endl;
        else if (input[i] == '/')
            cout << "operator: /" << endl;
        else if (input[i] == '%')
            cout << "operator: %" << endl;
        else if (input[i] == '=')
            cout << "operator: =" << endl;
    }
}

int main()
{
    string input;

    cout << "Enter an expression: ";
    cin >> input;


    findOperators(input);

    return 0;
}

