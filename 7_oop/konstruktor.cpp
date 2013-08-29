#include <iostream>
#include <string>
using namespace std;

class c
{
private:
  int i;
  string s;
public:
  c()
  {
    i = 0;
    s = "-";
  }
  c(int p_i, string p_s)
  {
    i = p_i;
    s = p_s;
  }
  c(int p_i);
  
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
c::c(int p_i): i(p_i), s("Spezial")
{
}
void c::inkrementieren()
{
  i++;
};

int main(int argc, char *argv[])
{
  c c1;
  c *c2 = new c(2);
  c1 = c(1,"text");
  cout << c1.getInt() << endl;
  cout << c1.getStr() << endl;
  cout << c2->getInt() << endl;
  cout << c2->getStr() << endl;
  return 0;
}
