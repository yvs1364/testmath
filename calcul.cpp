#include <iostream>

using namespace std;

int main() {
   
    double a(0), b(0);

    cout << "----------------------- Welcome to the addition program -----------------------" << endl;
    cout << " Enter first number" << endl;
    cin >> a;
    cout << " Enter second number" << endl;
    cin >> b;

    double sum(a + b);

    cout << a << " + " << b << " = " << sum << endl;
    return 0;
};