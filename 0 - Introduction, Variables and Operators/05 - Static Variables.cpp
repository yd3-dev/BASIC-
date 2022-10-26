#include<iostream>
using namespace std;

static int funcount;
void func() {
    static int internal_counter;
    cout << "." << internal_counter++;
    funcount++;
}

int main() {
    static int count;
    cout << count << " - " << funcount << endl;
    for(int i = 0; i < 9; i++) 
        func();
    cout << "\n"  << funcount << endl;
    return 0;
}

