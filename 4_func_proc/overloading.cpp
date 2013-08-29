#include <iostream>
using namespace std;

int addieren(int a, int b)
{
  cout << a << " + " << b << " = ";
  return (a + b);
}

int addieren(int a, int b, int c)
{
  cout << a << " + " << b << " + " << c <<" = ";
  return (a + b + c);
}

int addieren(int a, int b, int c, int d)
{
  cout << a << " + " << b << " + " << c << " + " << d <<" = ";
  return (a + b + c + d);
}

int addieren(int a, double b)
{
  cout << a << " + " << b << " = ";
  return (a + static_cast <int> (b));
}

int main(int argc, char *argv[])
{
  cout << addieren(1,1) << endl;
  cout << addieren(1,0,1) << endl;
  cout << addieren(1,0,1,0) << endl;
  cout << addieren(1,1.1) << endl;
  return 0;
}
