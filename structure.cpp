#include <iostream>
#include <string>

using namespace std;




// user defined datatype called "Georg"
struct Georg {
    string Augenfarbe;
    int Alter;
    string Wohnort;
};

int main() {
    Georg zuordnung;
    Georg* ptr_zuordnung = &zuordnung;  // Zeigerdefinition die auf "zuordnung zeigt
    cout << "Bitte Augenfarbe eingeben: " << endl;
    cin >> zuordnung.Augenfarbe;
    cout << endl;
    cout << "Bitte Alter eingeben: ";
    cout << endl;
    cin >> zuordnung.Alter;
    cout << endl;
    cout << "Bitte Wohnort eintippen: ";
    cin >> ptr_zuordnung->Wohnort ; //
    cout << endl;

    cout << "Du hast Folgendes eingegeben: " << zuordnung.Augenfarbe << endl;
    cout << ptr_zuordnung->Alter << endl;
    cout << ptr_zuordnung->Wohnort << endl;

    cout << &zuordnung << endl;
    cout << ptr_zuordnung << endl;
    cout << ptr_zuordnung->Augenfarbe << endl;




    return 0;
}
