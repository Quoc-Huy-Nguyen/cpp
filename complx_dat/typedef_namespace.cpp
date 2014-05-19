#include <iostream>
typedef unsigned int uint;
using namespace std;

namespace Ns {
  uint u = 1;
  struct str
  {
    uint u;
    int i;
  };

  void zeige(void)
  {
    cout << u << endl;
  }
  
}

using namespace Ns;

int main(int argc, char *argv[])
{
  zeige();
  return 0;
}
