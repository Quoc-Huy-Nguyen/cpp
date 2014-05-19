#include <iostream>
using namespace std;

// Argumentenliste können verwendet werden um Parameters an ein Program zu übergeben.
// Beispiel eines Unix Programs:  rm -r foo 
int main(int argc, char *argv[])
{
  for (int i = 0; i < argc; ++i)
    {
      cout << i << " " << argv[i] << endl;
    }
  return 0;
}
