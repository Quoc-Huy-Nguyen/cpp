#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i1;
  int i2;
  int &i = i1;
  i = 2;
  cout << i << endl;
  i2 = 3;
  i = i2;
  cout << i << endl;
  i = 5;
  cout << i1 << endl;
  cout << i2 << endl;
  return 0;
}
