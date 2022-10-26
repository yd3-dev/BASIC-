#include<iostream>
using namespace std;

int Max(int, int);
long Max(int, int, int);

int main() {
    int x, y, z; cin >> x >> y >> z;
    cout << Max(x,y) << endl;
    cout << Max(x,y,z) << endl;    
    return 0;
}

int Max(int a, int b) {
    return ((a>b) ? a : b);
}
long Max(int a, int b, int c) {
    return Max(Max(a, b), c);
}
