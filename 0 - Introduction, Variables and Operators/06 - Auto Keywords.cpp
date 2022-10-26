#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
    auto a = 3.14;
    auto b = 'y';
    auto c = "y";
    cout << "a : " << a << " - " << typeid(a).name() << endl;
    cout << "b : " << b << " - " << typeid(b).name() << endl;
    cout << "c : " << c << " - " << typeid(c).name() << endl;
    
    return 0;
}

