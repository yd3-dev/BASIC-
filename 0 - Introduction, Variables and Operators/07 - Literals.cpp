#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
    // Using prefixes in integer literals
    cout << "\n\nUsing prefixes in integer literals: \n";
    int dec = 333;          // No prefix
    int hex = 0x14D;        // 0x......
    int oct = 0515;         // 0.......
    int bin = 0b101001101;  // 0b......
    cout << "Decimal (333) : " << dec << endl;
    cout << "Hexadecimal (0x14D) : " << hex << endl;
    cout << "Octal (0515) : " << oct << endl;
    cout << "Binary (0b101001101) : " << bin << endl;

    // Using suffixes in integer literals
    cout << "\n\nUsing suffixes in integer literals: \n";
    int int_var = 333;
    unsigned int uint_var = 333U;                           // ....u or ....U
    long int long_int_var = 333L;                           // ....l or ....L
    unsigned long int long_uint_var = 333UL;                // ...ul or ...UL
    long long int long_long_int_var = 333LL;                // ...ll or ...LL
    unsigned long long int long_long_uint_var = 333ULL;     // ..ull or ..ULL
    cout << "Integer (333) : " << int_var << " -> " << typeid(int_var).name() << endl;
    cout << "Unsigned integer (333U) : " << uint_var << " -> " << typeid(uint_var).name() << endl;
    cout << "Long integer (333L) : " << long_int_var << " -> " << typeid(long_int_var).name() << endl;
    cout << "Unsigned long integer (333UL) : " << long_uint_var << " -> " << typeid(long_uint_var).name() << endl;
    cout << "Long long integer (333LL) : " << long_long_int_var << " -> " << typeid(long_long_int_var).name() << endl;
    cout << "Unsigned long long integer (333ULL) : " << long_long_uint_var << " -> " << typeid(long_long_uint_var).name() << endl;

    // Using prefixes in floating-point literals
    cout << "\n\nUsing prefixes in floating-point literals: \n";
    float float_var = 3.33F;                                // ...f or ...F
    double double_var = 3.33;                               // ... or nothing
    long double long_double_var = 3.33L;                    // ...l or ...L
    cout << "Float (3.33F) : " << float_var << " -> " << typeid(float_var).name() << endl;
    cout << "Double (3.33) : " << double_var << " -> " << typeid(double_var).name() << endl;
    cout << "Long double (3.33L) : " << long_double_var << " -> " << typeid(long_double_var).name() << endl;

    // Using prefixes in character literals
    char char_var = 'y';         // No Prefix
    wchar_t wchar_var = L'y';    // L...   
    char16_t char16_var = u'y';  // u...
    char32_t char32_var = U'y';  // U...
    cout << "char (\'y\') : " << char_var << " -> " << typeid(char_var).name() << endl;
    cout << "wchar_t (L\'y\') : " << wchar_var << " -> " << typeid(wchar_var).name() << endl;
    cout << "char16_t (u\'y\') : " << char16_var << " -> " << typeid(char16_var).name() << endl;
    cout << "char32_t (U\'y\') : " << char32_var << " -> " << typeid(char32_var).name() << endl;
    
    cout << "Boolean (true) : " << true << " -> " << typeid(true).name() << endl;
    cout << "Boolean (false) : " << false << " -> " << typeid(false).name() << endl;

    return 0;
}