#include <iostream>

using namespace std;

int main(void)
{
  // Variable
  int zahl;
  // Dezimal Zuweisung
  zahl = 15;
  cout << "Dezimal-Wert = " << zahl <<"\n";
  // Hex Zuweisung
  zahl = 0xf;
  cout << "HEX: 0xF = " << zahl <<"\n";
  // Binary Zuweisung
  zahl = 017;
  cout << "BIN: 0F = " << zahl <<"\n";
  return(0); 
}
