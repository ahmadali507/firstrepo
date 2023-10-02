#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, discriminent;
    cout << " enter the value of a (coefficient of x^2) : ";
    cin >> a;
    cout << " enter the value of b (coefficient of x ) : ";
    cin >> b;
    cout << " enter the value of c (constant) : ";
    cin >> c;

    discriminent = (b * b) - (4 * a * c);
    if (discriminent > 0)
    {
        int root1, root2;
        root1 = (-b + sqrt(discriminent)) / (2 * a);
        root2 = (-b - sqrt(discriminent)) / (2 * a);
        cout << "Since discriminent is positive, so equation has two roots." << endl;
        cout << "First root = " << root1 << endl;
        cout << "Second root = " << root2 << endl;
    }
    else if (discriminent == 0)
    {
        int root;
        root = (-b - sqrt(discriminent)) / (2 * a);
        cout << "Since discriminent is zero, so equation has only one root." << endl;
        cout << "Real root = " << root << endl;
    }
    else
    {
        cout << " the equation has no real roots . ";
    }

    return 0;
}