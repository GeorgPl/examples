#include<iostream>
#include <string>
using namespace std;

int main (){
    string augenfarbe;
    int alter;
    string altereingabe;
    string name;

    cout << " augenfarbe: ";
    getline(cin,augenfarbe);
    cout << "alter: ";
    getline(cin,altereingabe);
    cout << " Name: ";
    getline(cin,name);
    cout << name;

    alter = stoi(altereingabe);

    auto alterStd = alter * 365 * 24;

    cout <<  alterStd;

    cout << "good bye" << endl;

   return 0;
}
