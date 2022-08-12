#include <iostream> // std::cout
#include <string>   // std:: string, std::stoi

// string --> int
// stoi()
// alter in jahren --> alter in stunden
// function ageToHours()


using namespace std;

int alterInStd(int &alter) {

    return alter * 365 * 24;
}

int main() {
    string str_age_years = "27"; // Hier war der Fehler !
    int i_age_years;
    string alteralsstring;

    i_age_years = stoi(str_age_years);

    // int i_age_hours = (i_age_years) * 365 * 24;

    cout << "Bitte hier dein Alter in Jahren eingeben: ";
    getline(cin, alteralsstring);

    i_age_years = stoi(alteralsstring);

    cout << "Dein Alter in Stunden ist: " <<
         alterInStd(i_age_years);

    return 0;
}

/*
 * #include <iostream> // std::cout
#include <string>   // std:: string, std::stoi

using namespace std;

int main() {
    string str_age_years = "27"; // Hier war der Fehler !
    int i_age_years;
    i_age_years = stoi(str_age_years);

    int i_age_hours = (i_age_years) * 365 * 24;

    cout << "Bitte hier dein Alter in Jahren eingeben: " << endl;
    getline(cin, str_age_years);
    cout << "Dein Alter in Stunden ist: ";
    cout << i_age_hours << "  hours";

    return 0;
}

 *
 *
 */