#include <iostream> // std::cout
#include <string> // std::string, std::stoi

using namespace std;

int main (){
    string alter = "27 Jahre, Werner Plessl";
    string hex = "40c3";
    string bin = "-101011110111";
    string dec = "2001";


    string::size_type sz; // alias of size_t

    //getline(cin,laptop);

    int i_alter = stoi(alter,&sz);
    int i_hex = stoi(hex, nullptr,16);
    int i_bin = stoi (bin, nullptr,2);
    int i_dec = stoi (dec);

    cout << i_alter << endl;
    cout << i_hex << endl;
    cout << i_bin << endl;
    cout << i_dec << endl;



    return 0;
}

