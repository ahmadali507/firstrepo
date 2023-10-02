#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1, x2, y1, y2, r1, r2;
    unsigned int distance;
    cout << " enter the radii of the two circles" << endl;

label_r1:
    cout << " enter r1: ";
    cin >> r1;
    if (r1 < 0)
    {
        cout << "Please enter positive value for r1" << endl;
        goto label_r1;
    }

label_r2:
    cout << " enter r2: ";
    cin >> r2;
    if (r2 < 0)
    {
        cout << "Please enter positive value for r2" << endl;
        goto label_r2;
    }

    cout << " enter x1: ";
    cin >> x1;

    cout << " enter y1: ";
    cin >> y1;

    cout << " enter x2: ";
    cin >> x2;

    cout << " enter y2: ";
    cin >> y2;

    distance = sqrt((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));

    cout << endl;
    cout << "r1 = " << r1 << endl;
    cout << "(x1, y1) = "
         << "(" << x1 << ", " << y1 << ")" << endl;

    cout << "r2 = " << r2 << endl;
    cout << "(x2, y2) = "
         << "(" << x2 << ", " << y2 << ")" << endl;

    cout << endl;

    cout << "Output: " << endl;
    if (distance <= abs(r1 - r2))
    {
        cout << "circle 2 is inside circle 1. " << endl;
    }
    else if (distance <= r1 + r2)
    {
        cout << " circle 2 overlaps circle 1." << endl;
    }
    else
    {
        cout << " circle 2 is outside the circle 1.";
    }

    return 0;
}