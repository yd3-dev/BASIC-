#include<iostream>
using namespace std;

int main() {
    int a(5), x(0);
    bool res(false);
    cout << "Shortcircuiting in Logical Operators :\n\n" << endl;
    cout << "In case of && operator : " << endl;
    cout << "If first condition is false, then second condition is not evaluated.\n" << endl;
    res = (a == 5) && (++x == 1);
    cout << "(a == 5 && ++x == 1) -> (T && T) : " << res;
    cout << " | x : " << x << endl;

    x = 0;
    res = (a != 5) && (++x == 1);
    cout << "(a != 5 && ++x == 1) -> (F && <Not Evaluated>) : " << res;
    cout << " | x : " << x << endl;

    cout << "\n\nIn case of || operator : " << endl;
    cout << "If first condition is true, then second condition is not evaluated.\n" << endl;
    res = (a == 5) || (++x == 1);
    cout << "(a == 5 || ++x == 1) -> (T || <Not Evaluated>) : " << res;
    cout << " | x : " << x << endl;
    x = 0;
    res = (a != 5) || (++x == 1);
    cout << "(a != 5 || ++x == 1) -> (F || T) : " << res;
    cout << " | x : " << x << endl;
    
    return 0;
}