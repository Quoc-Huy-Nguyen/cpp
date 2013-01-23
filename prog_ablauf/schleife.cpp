#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i = 1;
  while (i <= 10){
    cout << i << " ";
    i++;
  }
  cout << endl;
  
  do
    {
      cout << i << " ";
      i++; 
      
    } while (i<=20);
  cout << endl;
  
  for (int j = 1; j <= 10;j++)
    {
      cout << j << " ";    
    }
  cout << endl;

  for (int k = 1; k <= 10; k++)
    {
      if (k == 3)
      {
	continue;
      } 
      cout << k << " ";
      if (k == 5)
	{
	  break;
	}

    }
  cout << endl;

  while (i <= 30){
    cout << i << " ";
      if (i == 25)
	{
	  break;
	}

    i++;
    
  }
  cout << endl;

  return 0;
}
