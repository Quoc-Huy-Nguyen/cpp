#include <iostream>
#include <string>
using namespace std;

class c
{
private:
  static int tempt;
  int i;
  string s;
public:
  static int const K = 0;
  void ausgeben()
  {
    cout << K << " " << tempt << endl;
  }
  void inkrementieren()
  {
    tempt++;
  }
};

int c::tempt = 0;

int main(int argc, char *argv[])
{
  c c1,c2;
  c1.ausgeben();
  c2.inkrementieren();
  c1.ausgeben();
  c2.ausgeben();
  return 0;
}
