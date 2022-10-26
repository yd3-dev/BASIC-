#include<iostream>
#include<bitset> // for bitset
using namespace std;

int main() {
    int a(3), b(6);
    cout << "a = " << a << " | b = " << b << endl;
    cout << "(a&b) -> (" << a << "&" << b << ") = " << (a & b) << endl;
    cout << "(a|b) -> (" << a << "|" << b << ") = " << (a | b) << endl;
    cout << "(a^b) -> (" << a << "^" << b << ") = " << (a ^ b) << endl;
   
    cout << "\n\nBinary representation :" << endl;
    cout << "a = " << bitset<3>(a) << "| b = " << bitset<3>(b) << endl;
    cout << "(a&b) -> (" << bitset<3>(a) << "&" << bitset<3>(b) << ") = " << bitset<5>(a & b) << endl;
    cout << "(a|b) -> (" << bitset<3>(a) << "|" << bitset<3>(b) << ") = " << bitset<5>(a | b) << endl;
    cout << "(a^b) -> (" << bitset<3>(a) << "^" << bitset<3>(b) << ") = " << bitset<5>(a ^ b) << endl;
   

    cout << "\n\nBitwise Left Shift Operator : " << endl;
    cout << "a = " << a << " | b = " << b << endl;
    cout << "a << 0 = " << bitset<10>(a << 0) << " -> " << (a << 0) << endl;
    cout << "a << 1 = " << bitset<10>(a << 1) << " -> " << (a << 1) << endl;
    cout << "a << 2 = " << bitset<10>(a << 2) << " -> " << (a << 2) << endl;
    cout << "a << 3 = " << bitset<10>(a << 3) << " -> " << (a << 3) << endl;
    cout << "a << 4 = " << bitset<10>(a << 4) << " -> " << (a << 4) << endl;
    cout << "a << 5 = " << bitset<10>(a << 5) << " -> " << (a << 5) << endl;
    cout << "a << -1 = " << bitset<32>(a << -1) << " -> " << (a << -1) << endl;
    cout << "a << -2 = " << bitset<32>(a << -2) << " -> " << (a << -2) << endl;
    cout << "a << -3 = " << bitset<32>(a << -3) << " -> " << (a << -3) << endl;
    cout << "a << -4 = " << bitset<32>(a << -4) << " -> " << (a << -4) << endl;
    cout << "a << -5 = " << bitset<32>(a << -5) << " -> " << (a << -5) << endl;

    cout << "\n\nBitwise Right Shift Operator : " << endl;
    a = 71;
    cout << "a >> 0 = " << bitset<10>(a >> 0) << " -> " << (a >> 0) << endl;
    cout << "a >> 1 = " << bitset<10>(a >> 1) << " -> " << (a >> 1) << endl;
    cout << "a >> 2 = " << bitset<10>(a >> 2) << " -> " << (a >> 2) << endl;
    cout << "a >> 3 = " << bitset<10>(a >> 3) << " -> " << (a >> 3) << endl;
    cout << "a >> 4 = " << bitset<10>(a >> 4) << " -> " << (a >> 4) << endl;
    cout << "a >> 5 = " << bitset<10>(a >> 5) << " -> " << (a >> 5) << endl;
    cout << "a >> -1 = " << bitset<32>(a >> -1) << " -> " << (a >> -1) << endl;
    cout << "a >> -2 = " << bitset<32>(a >> -2) << " -> " << (a >> -2) << endl;
    cout << "a >> -3 = " << bitset<32>(a >> -3) << " -> " << (a >> -3) << endl;
    cout << "a >> -4 = " << bitset<32>(a >> -4) << " -> " << (a >> -4) << endl;
    cout << "a >> -5 = " << bitset<32>(a >> -5) << " -> " << (a >> -5) << endl;

    cout << "\n\nBitwise Not Operator : " << endl;
    cout << "\nFor unsigned integers : " << endl;
    unsigned int u_int(10);
    cout << " u_int = " << bitset<32>(u_int) << " -> " << u_int << endl;
    cout << "~u_int = " << bitset<32>(~u_int) << " -> " << ~u_int << endl;

    cout << "\nFor signed integers : " << endl;
    int s_int(10);
    cout << " int = " << bitset<32>(s_int) << " -> " << s_int << endl;
    cout << "~int = " << bitset<32>(~s_int) << " -> " << ~s_int << endl;
    cout << "\n"; 
    s_int = -10;
    cout << " int = " << bitset<32>(s_int) << " -> " << s_int << endl;
    cout << "~int = " << bitset<32>(~s_int) << " -> " << ~s_int << endl;

    return 0;
}
