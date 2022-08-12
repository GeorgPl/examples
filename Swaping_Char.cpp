#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


/**************************************
 generic function swapNums()
**************************************/
template<typename Z>
void swapNums(Z &a, Z &b) {
    Z z = a;
    a = b;
    b = z;

}

/*
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void swapNums(char &x, char &y) {
    char z = x;
    x = y;
    y = z;
}
 */

int main() {
    int a = 7, b = 9;

    char firstChar = 'a';
    char secondChar = 'b';

    cout << "a " << a << " b " << b << endl;
    swapNums(a, b);
    cout << "a " << a << " b " << b << endl;


    cout << "Before swap: " << "\n";
    getline(cin, firstChar);
    getline(cin, secondChar);

    cout << firstChar << secondChar << "\n";


    swapNums(firstChar, secondChar);

    cout << "After swap: " << "\n";
    cout << firstChar << secondChar << "\n";
    return 0;
}