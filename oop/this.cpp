#include <iostream>
#include <string>
using namespace std;

class c
{
private:
  int i;
  string s;
public:
  void setzen(int i, string s)
  {
    this->i = i;
    this->s = s;
  }
  int getInt()
  {
    return i;
  }
  string getStr()
  {
    return s;
  }
  c duplizieren();
  c *getAddress()
  {
    return this;
  }
};

c c::duplizieren()
{
  return *this;
};

int main(int argc, char *argv[])
{
  c c1;
  c *c2 = new c;
  c1.setzen(1,"text");
  cout << c1.getInt() << endl;
  cout << c1.getStr() << endl;
  c2->setzen(2, "TEXT");
  cout << c2->getInt() << endl;
  cout << c2->getStr() << endl;
  c c3 = c2->duplizieren();
  cout << c3.getInt() << endl;
  cout << c3.getStr() << endl;
  c *c4;
  c4 = c1.getAddress();
  cout << c4->getInt() << endl;
  cout << c4->getStr() << endl;  
  
  return 0;
}
