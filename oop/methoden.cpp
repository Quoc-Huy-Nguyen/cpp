#include <iostream>
#include <string>
using namespace std;

class c
{
private:
  int i;
  string s;
public:
  void setzen(int p_i, string p_s)
  {
    i = p_i;
    s = p_s;
  }
  int getInt()
  {
    return i;
  }
  string getStr()
  {
    return s;
  }
  void inkrementieren();
};

void c::inkrementieren()
{
  i++;
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
  return 0;
}
