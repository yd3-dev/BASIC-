#include<iostream>
using namespace std;

int main() {
    int a(3), b(6), c(9);
    int tmp, tmp2;

    tmp = (a, b, c); // as comma is used with parenthesis, and comma operator is right associative, 
    cout << "tmp : " << tmp << endl; //it will be evaluated from right to left

    tmp2 = a, b, c; // as assignment operator has higher precedence than comma operator
    cout << "tmp2 : " << tmp2 << endl; // it will be evaluated just tmp2 = a only
    return 0;
}
