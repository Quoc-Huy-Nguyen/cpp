#include <iostream>
using namespace std;

#define K 10
#define FUNC1(a,b) a+b

int main(int argc, char *argv[])
{
  cout << K << " " << FUNC1(1,1) << endl;
  cout << "Heute ist " << __DATE__ << endl;
  cout << "Uhrzeit; " << __TIME__ << endl;
  cout << "Zeilenanzahl dieses Programs: " << __LINE__ << endl;
  cout << "Dateiname: " << __FILE__ << endl;
  return 0;
}
