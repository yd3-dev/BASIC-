#include<iostream>
using namespace std;
int main() {
    int n(0);
    cout << "Enter a number : ";
    cin >> n;
    if(n==0) cout << "Number is Zero" << endl;
    else if(n > 0) cout << "Number is Positive" << endl;
    else if(n < 0) cout << "Number is Negative" << endl;
    return 0;
}
