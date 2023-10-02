#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << " enter the letter : ";
    cin >> letter;
    letter = tolower(letter);

    if (letter == 'a' || letter == 'b' || letter == 'c')
    {
        cout << " 2 " << endl;
    }
    else if (letter == 'd' || letter == 'e' || letter == 'f')
    {
        cout << " 3 " << endl;
    }
    else if (letter == 'g' || letter == 'h' || letter == 'i')

    {
        cout << " 4 " << endl;
    }
    else if (letter == 'j' || letter == 'k' || letter == 'l')
    {
        cout << " 5 " << endl;
    }
    else if (letter == 'm' || letter == 'n' || letter == 'o')
    {
        cout << " 6 " << endl;
    }
    else if (letter == 'p' || letter == 'q' || letter == 'r' || letter == 's')
    {
        cout << "7" << endl;
    }
    else if (letter == 't' || letter == 'u' || letter == 'v')
    {
        cout << "8" << endl;
    }
    else if (letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z')
    {
        cout << "9" << endl;
    }
    else
    {
        cout << letter << " is an invalid input." << endl;
    }
    return 0;
}