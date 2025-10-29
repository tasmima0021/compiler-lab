#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    if (line[0] == '/' && line[1] == '/')
    {
        cout << "It is a single line comment.";
    }
    else if (line[0] == '/' && line[1] == '*')
    {
        cout << "It is a multi-line comment.";
    }
    else
    {
        cout << "It is not a comment.";
    }

    return 0;
}
