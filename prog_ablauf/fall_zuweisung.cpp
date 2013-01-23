#include <iostream>
using namespace std;
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
int main(int argc, char *argv[])
{
 
  int x,y;
  int  h_x;
  cout << "Rechne h(x), wenn x = "; 
  cin >> x;
  h_x = ( x >= 1 ) ? 1 : 0;
  cout << "h(x) = " << h_x << endl;
  cout << "Rechne MAX(x,y)" << endl;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  cout << "MAX(x,y) = " << MAX(x,y) << endl;
  return 0;
}
