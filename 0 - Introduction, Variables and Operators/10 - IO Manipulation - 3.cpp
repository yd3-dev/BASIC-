#include<iostream>
#include<iomanip> // for setprecision(n)
using namespace std;

int main() {
    
    cout << "Floating Point - Default Printing Format :" << endl;
    {
        double a;
        a = 1.2300;
        cout << "1.2300 : " << a << endl;
        a = 1567.56732;
        cout << "1567.56732 : " << a << endl;
        a = 1244567.45;
        cout << "1244567.45 : " << a << endl;
        a = 124456.67;
        cout << "124456.67 : " << a << endl;
        a = 123e+2;
        cout << "123e+2 : " << a << endl;
    }
    cout << "\n\n\n-----------------\n";
    cout << defaultfloat;
    cout << "Floating Point - Manipulating Default Format - [notation flag : defaultfloat] :" << endl;
    {
        double a(12.123), b(-123.12345), c(-1.34e+10), d(1223.123412341398);
        cout << "Default Format : " << endl;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(3)] : " << endl;
        cout << setprecision(3);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(16)] : " << endl;
        cout << setprecision(16);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "\n\nManipulated Format [setprecision(10)] : " << endl;
        cout << setprecision(10);

        cout << "showpoint flag set..." << endl;        
        cout << showpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "noshowpoint flag set..." << endl;        
        cout << noshowpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "showpos flag set..." << endl;        
        cout << showpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "noshowpos flag set..." << endl;        
        cout << noshowpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "uppercase flag set..." << endl;        
        cout << uppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "nouppercase flag set..." << endl;        
        cout << nouppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
    }

    cout << "\n\n\n-----------------\n";
    cout << fixed << setprecision(6);
    cout << "Floating Point - Manipulating Default Format - [notation flag : fixed] :" << endl;
    {
        double a(12.123), b(-123.12345), c(-1.34e+10), d(1223.123412341398);
        cout << "Default Format : " << endl;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(3)] : " << endl;
        cout << setprecision(3);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(16)] : " << endl;
        cout << setprecision(16);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "\n\nManipulated Format [setprecision(10)] : " << endl;
        cout << setprecision(10);

        cout << "showpoint flag set..." << endl;        
        cout << showpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "noshowpoint flag set..." << endl;        
        cout << noshowpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "showpos flag set..." << endl;        
        cout << showpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "noshowpos flag set..." << endl;        
        cout << noshowpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "uppercase flag set..." << endl;        
        cout << uppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "nouppercase flag set..." << endl;        
        cout << nouppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
              
    }


    cout << "\n\n\n-----------------\n";
    cout << scientific << setprecision(6);
    cout << "Floating Point - Manipulating Default Format - [notation flag : scientific] :" << endl;
    {
        double a(12.123), b(-123.12345), c(-1.34e+10), d(1223.123412341398);
        cout << "Default Format : " << endl;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(3)] : " << endl;
        cout << setprecision(3);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "\n\nManipulated Format [setprecision(16)] : " << endl;
        cout << setprecision(16);
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "\n\nManipulated Format [setprecision(10)] : " << endl;
        cout << setprecision(10);

        cout << "showpoint flag set..." << endl;        
        cout << showpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;

        cout << "noshowpoint flag set..." << endl;        
        cout << noshowpoint;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "showpos flag set..." << endl;        
        cout << showpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "noshowpos flag set..." << endl;        
        cout << noshowpos;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;


        cout << "uppercase flag set..." << endl;        
        cout << uppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
        
        cout << "nouppercase flag set..." << endl;        
        cout << nouppercase;
        cout << "a (12.123) : " << a << endl;
        cout << "b (-123.12345) : " << b << endl;
        cout << "c (-1.34e+10) : " << c << endl;
        cout << "d (1223.123412341398) : " << d << endl;
              
    }
    return 0;
}