#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(int argc, char *argv[])
{
  char c1[] = "HALLO TEST";
  char *c;
  c = (char *) malloc(strlen(c1)+1);
  strcpy(c, c1);
  *(c+1) = 'a';
  c[4] = 'o';
  cout << c1 << endl;
  cout << c << endl;
  free(c);
  
  long *l;
  l = (long *) malloc(10*sizeof(long));
  for (int i = 0; i < 10; i++) {
    *(l+i) = i*i;
  }
  
  for (int i = 0; i < 10; i++) {
    cout << *(l+i) << endl;
  }
  free(l);

  return 0;
}
