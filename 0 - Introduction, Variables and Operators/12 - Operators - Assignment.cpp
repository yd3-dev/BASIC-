#include<iostream>
using namespace std;

int main() {
    int a(5), b(10);
    cout << "Simple Assignment Operators :" << endl;
    cout << "a=b : " << (a=b) << endl; a,b = 5,10;
    cout << "a+=b : " << (a+=b) << endl; a,b = 5,10;
    cout << "a-=b : " << (a-=b) << endl; a,b = 5,10; 
    cout << "a*=b : " << (a*=b) << endl; a,b = 5,10;
    cout << "a/=b : " << (a/=b) << endl; a,b = 5,10;
    cout << "a%=b : " << (a%=b) << endl; a,b = 5,10; // Operand must be integers

    cout << "\n\nCompound Assignment Operators :" << endl;
    cout << "a<<=b : " << (a<<=b) << endl; a,b = 5,10; // Operand must be integers
    cout << "a>>=b : " << (a>>=b) << endl; a,b = 5,10; // Operand must be integers
    cout << "a&=b : " << (a&=b) << endl; a,b = 5,10; // Operand must be integers
    cout << "a^=b : " << (a^=b) << endl; a,b = 5,10; // Operand must be integers
    cout << "a|=b : " << (a|=b) << endl; a,b = 5,10; // Operand must be integers
    
    return 0;
}