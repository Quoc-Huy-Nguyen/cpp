#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(int argc, char *argv[])
{
  char c1[] = "HALLO TEST";
  char *c;
  c = new char [strlen(c1)+1];
  strcpy(c, c1);
  *(c+1) = 'a';
  c[4] = 'o';
  cout << c1 << endl;
  cout << c << endl;
  delete [] c;
  
  long *l;
  l = new long [10];
  for (int i = 0; i < 10; i++) {
    *(l+i) = i*i;
  }
  
  for (int i = 0; i < 10; i++) {
    cout << *(l+i) << endl;
  }
  delete [] l;

  int *i;
  i = new int;
  cout << *i << endl;
  delete i;

  return 0;
}
