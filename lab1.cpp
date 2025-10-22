#include <iostream>
using namespace std;

int main()
{
    string input;
    int i, flag = 0;

    cout << "Enter any input: ";
    cin >> input;


    for (i = 0; i < input.length(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}

