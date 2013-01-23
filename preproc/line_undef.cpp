#include <iostream>
using namespace std;
#line 0 "myfile.cpp"
#define MY_MACRO(cond) if(cond)\
    { cout << " Kode-Zeile: " << __LINE__ << " " << "File-Name: " << __FILE__ << endl;} 
#define K
#undef K

int main(int argc, char *argv[])
{
#ifdef K
  cout << "K ist definiert" << endl;
#else
  cout << "K ist nicht definiert" << endl;
#endif
  MY_MACRO(true);
  return 0;
}
