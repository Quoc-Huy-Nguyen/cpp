#include <iostream>
#include <string>
using namespace std;
class d;
class c
{
private:
  int i;
  string s;
public:
  void ausgeben()
  {
    cout << i << " " << s << endl;
  }
  void setVal(string s)
  {
    i = 0;
    this->s = s; 
  }
  friend void inkrementieren(c &a);
  friend class d;
};

class d
{
  int i;
  string s;
public:
  void ausgeben()
  {
    cout << i << " " << s <<endl;
  }
  
  void setFriend(c &a)
  {
    a.setVal("Ich bin dein Freund");
  }
};


void inkrementieren(c &a)
{
  a.i++;
}

int main(int argc, char *argv[])
{
  c c1;
  d d1;
  d1.setFriend(c1);
  c1.ausgeben();
  inkrementieren(c1);
  c1.ausgeben();
  return 0;
}
