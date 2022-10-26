#include<iostream>
using namespace std;

int main() {
    int a(5), b(10),c(0),tmp(3);
    cout << "Binary Arihtmetic Operators :" << endl;
    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << static_cast<double>(a) / b << endl;
    cout << "a%b = " << a % b << endl; // % only works for integers
 
    cout << "\n\nUnary Arihtmetic Operators :" << endl;
    c = a + b;
    cout << "c : " << c << " | c++ : " << c++ << " | c : " << c << endl;
    c = a + b;
    cout << "c : " << c << " | ++c : " << ++c << " | c : " << c << endl;
    c = a + b;
    cout << "c : " << c << " | c-- : " << c-- << " | c : " << c << endl;
    c = a + b;
    cout << "c : " << c << " | --c : " << --c << " | c : " << c << endl;
    return 0;
}