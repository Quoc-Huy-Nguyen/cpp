#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i1 = 1;
  int i2 = 2;
  char c1[] = "HALLO TEST";
  int *i;
  char *c;
  i = &i1;
  cout << *i << endl;
  i = &i2;
  cout << *i << endl;
  c = &c1[0];
  *(c+1) = 'a';
  c[4] = 'o';
  cout << c1 << endl;
  return 0;
}
