#include <iostream>
using namespace std;

struct student
{
  int matrikelnummer;
  string name;
};

union zahl{
  int i;
  double d;
};

int main(int argc, char *argv[])
{
  student Max;
  Max.matrikelnummer = 1234;
  Max.name = "Max Mustermann";
  cout << Max.name << endl;
  cout << Max.matrikelnummer << endl;

  student *st;
  st = &Max;
  st->name = "Max Bla";

  cout << Max.name << endl;
  cout << Max.matrikelnummer << endl;

  zahl z;
  z.i = 1;
  z.d = 1.0;
  cout << z.d << endl;
  cout << z.i << endl;
  return 0;
}
