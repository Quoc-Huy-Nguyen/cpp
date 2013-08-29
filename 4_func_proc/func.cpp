#include <iostream>
using namespace std;
int addieren (int a, int b);

inline void func1(void)
{
  cout << "Ich bin eine inline Funktion 1" << endl;
}

int main(int argc, char *argv[])
{
  func1();
 
  int a,b;
  cout << "Hier ist Funktion 2, welche die Summe von a und b berechnet" << endl;
  cout << "Bitte gebe a und b ein" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "a + b = " << addieren(a,b) << endl;  
  return 0;
}

int addieren(int a, int b)
{
  return a+b;
}
