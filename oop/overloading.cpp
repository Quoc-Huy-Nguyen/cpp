#include <iostream>
using namespace std;

class cInt
{
private:
  int i;
public:
  void operator= (int p_i)
  {
    this->i = p_i;
  }
  void operator= (cInt p_i)
  {
    this->i = p_i.i;
  }
  int operator+ (cInt p_i)
  {
    return this->i + p_i.i; 
  }
  int getVal()
  {
    return i;
  }
  
};


int main(int argc, char *argv[])
{
  cInt i1, i2, i3;
  i1 = 1;
  i2 = i1;
  i3 = i1 + i2;
  cout << i1.getVal() << " + " << i2.getVal() << " = " << i3.getVal() << endl; 
  return 0;
}
