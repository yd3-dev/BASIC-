#include<iostream>
using namespace std;
int main() {
    int x(0), y(0);
    char key;
    cout << "Navigate using (L, D, U, R) : ";
    cin >> key;
    switch (key) {
        case 'L': x--; break;
        case 'D': y--; break;
        case 'U': y++; break;
        case 'R': x++; break;
        default: cout << "Invalid Input"; break;
    }
    cout << "New Co-ordinates : ( " << x << " ," << y << " )" << endl;
    return 0;
}
