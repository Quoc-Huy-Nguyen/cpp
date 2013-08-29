#include <iostream>
using namespace std;

#define I 1
#define K 2
#include "header.h"
#include "header.h"

int main(int argc, char *argv[])
{
#if I==1
  cout << "I = 1" << endl;
#else
  cout << "I != 1" << endl;
#endif

#ifdef K
  cout << "K ist definiert" << endl;
#endif
  return 0;
}
