#include <iostream>

using namespace std;

int main(void)
{
  // Escape-Sequenzen haben ein backslash als prefix
  cout << "Ausführungszeichen: \" " << endl;
  cout << "Backslash-Zeichen: \\ " << endl;
  cout << "Newline-Zeichen: \nNeue Zeile \n";
  cout << "Tabelle" <<endl;
  cout << "\tA \tB \tC" <<endl;
  cout << "\t1 \t1 \t1" <<endl;
  cout << "\t2 \t2 \t2" <<endl;
  cout << "\t3 \t3 \t3" <<endl;
  cout << "Hex-Code at-Symbol 40 = \x40" <<endl;
  cout << "Oct-Code at-Symbol 100 = \100" <<endl;
  cout << "Unicode 8 Euro-Symbol 20AC = \u20ac" <<endl;
  cout << "Unicode 16 Euro-Symbol 000020AC = \U000020ac" <<endl;
}
