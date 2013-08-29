#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

  string s1;
  string s2("TEST");
  getline(cin,s1,'.');
  cout << s2 << endl;
  cout << s1.c_str() << endl;  
  cout << (s1 = s1 + "ABC").c_str() << endl;  
  return 0;
}
