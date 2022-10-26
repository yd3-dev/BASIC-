#include<iostream>
using namespace std;

int main() {
    int a(5), b(15);
    cout << "Logical Operators :" << endl;
    cout << "(a<10 && a>0) : " << (a < 10 && a > 0) << endl;
    cout << "(b<10 && b>0) : " << (b < 10 && b > 0) << endl;
    cout << "(a==5 || b==0) : " << (a == 5 || b == 0) << endl;
    cout << "(!a==5) : " << (!a == 5) << endl;

    cout << "(a<10 and a>0) : " << (a < 10 and a > 0) << endl;
    cout << "(b<10 and b>0) : " << (b < 10 and b > 0) << endl;
    cout << "(a==5 or b==0) : " << (a == 5 or b == 0) << endl;
    cout << "(not a==5) : " << (not a == 5) << endl;
    return 0;
}