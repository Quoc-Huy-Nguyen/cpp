#include <iostream>
#include <string>
using namespace std;

class c
{
public:
  int i;
  string s;
};


int main(int argc, char *argv[])
{
  c c1;
  c *c2 = new c;
  c1.i = 1;
  c1.s = "text";
  cout << c1.i << endl;
  cout << c1.s << endl;
  c2->i = 2;
  c2->s = "TEXT";
  cout << c2->i << endl;
  cout << c2->s << endl;
  return 0;
}
