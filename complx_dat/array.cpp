#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int feld1[10];
  feld1[9] = 9;
  feld1[0] = 0;
  cout << feld1[0] << endl;
  cout << feld1[9] << endl;
  cout << feld1[3] << endl;

  int feld2[] = {1,3,5,7,9};
  feld2[6] = 11;
  cout << feld2[3] << endl;
  cout << feld2[5] << endl;
  cout << feld2[6] << endl;
  return 0;
}
