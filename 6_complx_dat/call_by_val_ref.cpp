#include <iostream>
using namespace std;
int call_by_ref(int &i)
{
  i = 1;
}

int call_by_val(int *i)
{
  *i = 2;
}

int call_by_valX(int *i)
{
  *i += 2;
}


int main(int argc, char *argv[])
{

  int i1 = 0;
  int &i = i1;
  int *k = &i;
  call_by_ref(i);
  cout << i1 << endl;  
  call_by_val(k);
  cout << i1 << endl;
  call_by_valX(k);
  cout << i1 << endl;  
  
  return 0;
}
