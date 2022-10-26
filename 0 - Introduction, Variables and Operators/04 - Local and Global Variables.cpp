#include<iostream>
using namespace std;
int y = 3;

void print_y(int y);

int main() {
    cout << "1. y = " << y << endl;
    int y = 33;
    cout << "2. y = " << y << endl;
    {
        cout << "3. y = " << y << endl;
        {
            cout << "4. y = " << y << endl;
            int y = 3333;
            cout << "5. y = " << y << endl;
        }
        int y = 33333;
        cout << "6. y = " << y << endl;
        {
            cout << "7. y = " << y << endl;
            int y = 333333;
            cout << "8. y = " << y << endl;
        }
        cout << "9. y = " << y << endl;
    }
    cout << "10. y = " << y << endl;
    print_y(y);
    return 0;
}

void print_y(int y) {
    cout << "11. y = " << y << endl; 
}