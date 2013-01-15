#include <iostream>
#include <limits.h>
using namespace std;

int main(void)
{
  // Boolean
  bool b1;
  b1 = true;
  cout << "b1 = true = " << b1 << endl;
  b1 = false;
  cout << "b1 = false = " << b1 << endl;
  // Charakter
  char ch1;
  ch1 = 'A';
  cout<< ch1 << endl;
  ch1 = 0x40;
  cout << "0x40 = " << ch1 << endl;
  // // Unicode Charakter
  wchar_t wch1;
  wch1 = L'ö';
  wcout << "ö = " << wch1 << endl;
  // Integer
  int i1;
  i1 = 100;
  cout << "i1 = " << i1 << endl;
  cout << INT_MIN << " <= int <= " << INT_MAX << endl;
  cout << SHRT_MIN << " <= short <= " << SHRT_MAX << endl;

  long l1;
  l1 = 1000000000; 
  cout << "l1 = " << l1 << endl;
  cout << LONG_MIN << " <= long <= " << LONG_MAX << endl;

  unsigned int ui1;
  ui1 = -1; 
  cout << "0" << " <= uint <= " << UINT_MAX << endl;
  cout << "unsigned int wert von -1 = " << ui1 << endl;

  // Konstante
  const int INT_1 = 123;
#define INT_2 345;
  i1 = INT_2; // Directly use of INT_2 at cout is not possible
  cout << "Konstante 1 = " << INT_1 << endl;
  cout << "Konstante 2 = " << i1  << endl;
 
  // enum
  // Lets define the states of a state machine without enum
  const int START = 0;
  const int RUNNING = 1;
  const int STOP = 2;
  // And with enum
  enum machine_states {start = 1,running,stop}; // try with start = 0
  enum machine_states actual_state ;
  actual_state = running;
  cout << "Aktueller Zustand = " << actual_state << endl;

  // Float und Double
  float float1 = 1.23f;
  double double1 = 1.23;
  cout << double1 - float1 << endl; // nicht null
  float1 = 1.23e28;
  cout << float1*float1 << endl; // überlauf
  double1 = 1.23e28;
  cout << double1*double1 << endl;
}
