#include<iostream>
using namespace std;
int main() {
    // Integer Types
    short short_var(0);
    int int_var(0);
    long long_var(0);
    long long long_long_var(0);
    unsigned short unsigned_short_var(0);
    unsigned int unsigned_int_var(0);
    unsigned long unsigned_long_var(0);
    unsigned long long unsigned_long_long_var(0);

    // Character Type
    char char_var('Y');
    unsigned char unsigned_char_var('Y');
    wchar_t wchar_t_var('Y');
    char16_t char16_t_var('Y');
    char32_t char32_t_var('Y');

    float float_var(0.0);
    double double_var(0.0);
    long double long_double_var(0.0);
    
    cout << "short : " << sizeof(short_var) << endl;
    cout << "int : " << sizeof(int_var) << endl;
    cout << "long : " << sizeof(long_var) << endl;
    cout << "long long : " << sizeof(long_long_var) << endl;
    cout << "unsigned short : " << sizeof(unsigned_short_var) << endl;
    cout << "unsigned int : " << sizeof(unsigned_int_var) << endl;
    cout << "unsigned long : " << sizeof(unsigned_long_var) << endl;
    cout << "unsigned long long : " << sizeof(unsigned_long_long_var) << endl;
    cout << "char : " << sizeof(char_var) << endl;
    cout << "unsigned_char : " << sizeof(unsigned_char_var) << endl;
    cout << "wchar_t : " << sizeof(wchar_t_var) << endl;
    cout << "char16_t : " << sizeof(char16_t_var) << endl;
    cout << "char32_t : " << sizeof(char32_t_var) << endl;
    cout << "float : " << sizeof(float_var) << endl;
    cout << "double : " << sizeof(double_var) << endl;
    cout << "long_double : " << sizeof(long_double_var) << endl;

    //size of literals
    cout << sizeof("YASH DESAI | AI Enthusiast") << endl;
    cout << sizeof(233333333) << endl;
    cout << sizeof(23333333333333333333333) << endl;
    return 0;
}