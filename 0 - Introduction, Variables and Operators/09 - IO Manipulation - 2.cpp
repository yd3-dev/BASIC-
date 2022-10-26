#include<iostream>
#include<iomanip> // Required for setw(n) and setfill(c)
using namespace std;

int main() {
    long a(123), b(-3), c(9999999999);
    cout << std::setw(7) << a << endl;
    cout << std::setw(7) << b << endl;
    cout << std::setw(7) << c << endl;

    cout << endl;
    cout << std::setfill('C');
    cout << std::setw(7) << a << endl;
    cout << std::setw(7) << b << endl;
    cout << std::setw(7) << c << endl;

    cout << std::left;
    cout << "\nleft align flag set : " << endl;
    cout << std::setfill('L');
    cout << std::setw(7) << a << endl;
    cout << std::setw(7) << b << endl;
    cout << std::setw(7) << c << endl;

    cout << std::right;
    cout << "\nright align flag set : " << endl;
    cout << std::setfill('R');
    cout << std::setw(7) << a << endl;
    cout << std::setw(7) << b << endl;
    cout << std::setw(7) << c << endl;
    cout << std::setfill('a');
    return 0;
}