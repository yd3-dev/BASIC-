#include<iostream>
using namespace std;
int main() {
    int num(0); cin >> num;
    for(int i=1; i <= num; i++) {
        for(int x=1; x<=10; x++) {
            cout << i*x << "\t";
        }
        cout << endl;
    }
}
