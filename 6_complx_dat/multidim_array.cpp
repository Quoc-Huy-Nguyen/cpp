#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  double matrix1[20][3];
  int matrix2[3][2] = {{1,1},{2,2},{3,3}};
  matrix1[0][2] = 10.10;
  cout << matrix1[0][2] << endl;
  for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 2; ++j)
	{
	  cout << matrix2[i][j] << " ";
	} 
    }
  return 0;
}
