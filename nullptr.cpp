#include <iostream>

using std::cout, std::endl;


int main() {

    int x = 15;

    int *ptr_x = &x;
    int *ptr_y;
    int *ptr_z = nullptr;

    cout << "adr. x     " << &x    << endl;
    cout << "adr. ptr_x " << ptr_x << endl;
    cout << "adr. ptr_y " << ptr_y << endl;
    cout << "adr. ptr_z " << ptr_z << endl;
    cout << "inh. ptr_y " << *ptr_y << endl;
    cout << "inh. ptr_z " << *ptr_z << endl;


    cout << "good bye" << endl;

    return 0;
}
