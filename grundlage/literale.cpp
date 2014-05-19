#include <iostream>

using namespace std;

int main(void)
{
  // Variable
  int zahl;
  // Dezimal Zuweisung
  zahl = 15;
  cout << "Dezimal-Wert = " << zahl << endl;
  // Hex Zuweisung
  zahl = 0xf;
  cout << "HEX: 0xF = " << zahl << endl;
  // Binary Zuweisung
  zahl = 017;
  cout << "BIN: 0F = " << zahl << endl;
  return(0); 
}
