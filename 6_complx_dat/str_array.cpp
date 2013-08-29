#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
  string s[5];
  for (int i = 0; i < 5; i++) {
    cout << i << ":";  
    getline(cin , s[i]);      
  }
  for (int i = 0; i < 5; i++) {

    cout << s[i] << endl;       
  }

  char buffer[1000];
  char **c;
  c = (char **) malloc(5 * sizeof(char *));
  for (int i = 0; i < 5; i++) {
    cout << i << ":";  
    cin.getline(buffer, 1000);
    c[i] = (char *) malloc(strlen(buffer)+1);
    strcpy(c[i],buffer); 
  }

  for (int i = 0; i < 5; i++) {
    cout << *(c+i) << endl;
  }

  return 0;
}
