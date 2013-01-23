#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
 
  int i;
  cout << "Zahl ";
  cin >> i;

  switch(i){
  case 1:
    cout << "Eins";
    cout << endl;
    break;
  case 2:
    cout << "Zwei";
    cout << endl;
    break;
  default:
    if (i == 3){
      cout << "Drei";
      cout << endl;
    }
    else if (i == 4){
      cout << "Vier" << endl;
    }
    else{
      cout << "Sonstige" << endl;
    }
    
  }

  return 0;
}
