#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
    cout << "Using boolalpha and noboolalpha flags :\n\n";
    {
        bool a(true), b(false);
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << endl;
        cout << std::boolalpha; // will show boolean values as true and false
        cout << "std::boolalpha flag set..." << endl;
        cout << "a : " << a << " | b : " << b << endl;
        cout << std::noboolalpha; // will show boolean values as 1 and 0 (DEFAULT)
        cout << "std::noboolalpha flag set..." << endl;
        cout << "a : " << a << " | b : " << b << endl;
    }
    cout << "\n\n\n\n" << endl;
    cout << "Using Integer base-n flags (dec, oct, hex) :\n\n";
    {
        
        int a(12345), b(0b11), c(-540);
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
    }
    cout << "\n\n\n\n" << endl;
    cout << "Using Integer base-n flags (dec, oct, hex) [WITH showbase and noshowbase] :\n\n";
    {
        cout << std::showbase; 
        cout << "std::showbase flag set...\n" << endl;
        
        int a(9999), b(0b11010101), c(-540);
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;

        cout << std::noshowbase; 
        cout << "std::noshowbase flag set...\n" << endl;
        
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
    }
    cout << "\n\n\n\n" << endl;
    cout << "Using Integer base-n flags (dec, oct, hex) [WITH showpos and noshowpos] :\n\n";
    {
        cout << std::showpos;
        cout << "std::showpos flag set...\n" << endl;
        
        int a(9999), b(0b11010101), c(-540);
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;

        cout << std::noshowpos;
        cout << "std::noshowpos flag set...\n" << endl;
        
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
    }
    cout << "\n\n\n\n" << endl;
    cout << "Using Integer base-n flags (dec, oct, hex) [WITH uppercase and nouppercase] :\n\n";
    {
        cout << std::uppercase;
        cout << "std::uppercase flag set...\n" << endl;
        
        int a(9999), b(0b11010101), c(-540);
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;

        cout << std::nouppercase;
        cout << "std::nouppercase flag set...\n" << endl;
        
        cout << "Defaults..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::hex; // will show hex values of integer
        cout << "std::hex flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::oct; // will show oct values of integer
        cout << "std::oct flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
        cout << std::dec; // will show dec values of integer (DEFAULT)
        cout << "std::dec flag set..." << endl;
        cout << "a : " << a << " | b : " << b << " | c : " << c << endl;
    }

    return 0;
}