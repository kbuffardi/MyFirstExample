#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    if( x >= 0) {
      cout << "Square Root of " << x << ": " sqrt(x) << endl;
    }
    if( y >= 0) {
      cout << "Square Root of " << y << ": " sqrt(y) << endl;
    }
    if( x < 0 || y < 0) {
      cout << "Square Root of a negative number is not a real number." << endl;
    }
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
