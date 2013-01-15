#include <iostream>
using namespace std;

int main(void)
{
  // Einfach
  int i1,i2;
  i2 = 10;
  i1 = i2*i2 + i2;
  cout << i1 << endl;
  double d1 = 1.1;
  d1 = d1 +1;
  cout << d1 << endl;
  i1 = d1 + i2;
  cout << i1 << endl;

  // Modulo
  cout << 10 % 3 << 9 %3 << endl;

  // Zusammengesetzte Operation
  i1 = 1;
  cout << "i1 = " << i1 << endl;
  cout << "i1 + 1 = " << i1 + 1 << endl;
  i1 +=1;
  cout << "i1 += 1 =  " << i1 << endl;
  i1 +=1;
  cout << "i1 += 1 =  " << i1 << endl;
  i1 -=2;
  cout << "i1 -= 2 =  " << i1 << endl;
  i1 *= 2 + 3;
  cout << "i1 *= 2 + 3 =  " << i1 << endl;
  i1 /= 2 ;
  cout << "i1 /= 2 =  " << i1 << endl;
  i1++ ;
  cout << "i1++ =  " << i1 << endl;
  i1-- ;
  cout << "i1-- =  " << i1 << endl;
  ++i1 ;
  cout << "++i1 =  " << i1 << endl;
  --i1 ;
  cout << "--i1 =  " << i1 << endl;

  // Typenumwandlung
  int i;
  double d;
  i = 2;
  d = 0.5;
  cout << (i = static_cast<int>(d)) << endl;

  // Bit Operation
  int i3 = 0x0f;
  int i4 = 0xf0;
  cout << "Bit Op 0x0f & 0xf0 = " << (i3 & i4) << endl;
  cout << "Bit Op 0x0f | 0xf0 = " << (i3 | i4) << endl; 
  cout << "Bit Op 0x0f >> 4 = " << (i3 >> 4) << endl; 
  cout << "Bit Op 0xf0 << 28 (win32) = " << (i4 << 28) << endl; // win32  

  // Logische Verknüpfung
  cout << "false && false = " << (false && false) << endl;
  cout << "false && true = " << (false && true) << endl;
  cout << "true && false = " << (true && false) << endl;
  cout << "true && true = " << (true && true) << endl;

  cout << "false || false = " << (false || false) << endl;
  cout << "false || true = " << (false || true) << endl;
  cout << "true || false = " << (true || false) << endl;
  cout << "true || true = " << (true || true) << endl;

  cout << "!true = " << (!true) << endl;
  cout << "!false = " << (!false) << endl;

  return 0;

}
