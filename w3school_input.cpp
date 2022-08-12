#include <iostream>
using namespace std;

float myfunction(float a, float b, float c); // Funktionsdeklaration

int main(){
    float z = myfunction(7.104,0.0124,407.231);
    cout <<"Das Ergebnis ist: " <<  z << endl;
    cout <<"Das Ergebnis ist: " <<  myfunction(7.104,0.0124,407.231);
  for (int i = 0; i<= 10; i ++){
      // z = z + 123;
      z += 123;
      cout << i << endl;
  }
  cout << endl << z;
    return 0;
}


float myfunction(float a, float b, float c) {
    float ergebnis = a+b-c;
    return ergebnis;
}