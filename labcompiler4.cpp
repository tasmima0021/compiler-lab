#include <iostream>
#include <string>
using namespace std;


void checkIdentifier(string word)
{
    if (!((word[0] >= 'A' && word[0] <= 'Z') ||
          (word[0] >= 'a' && word[0] <= 'z') ||
          (word[0] == '_')))
    {
        cout << "Not an identifier.";
        return;
    }

    for (int i = 1; i < word.length(); i++)
    {
        if (!((word[i] >= 'A' && word[i] <= 'Z') ||
              (word[i] >= 'a' && word[i] <= 'z') ||
              (word[i] >= '0' && word[i] <= '9') ||
              (word[i] == '_')))
        {
            cout << "Not an identifier.";
            return;
        }
    }

    cout << "It is a valid identifier.";
}


int main()
{
    string input;
    cout << "Enter a word: ";
    cin >> input;

    checkIdentifier(input);
    return 0;
}
