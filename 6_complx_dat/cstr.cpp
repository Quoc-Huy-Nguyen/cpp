#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
  char zeichenkette1[100];
  char zeichenketteX[10];
  char zeichenkette2[] = "TEST";
  char zeichenkette3[] = {'T','E','S','T','\0'};
  char zeichenkette4[] = {'T','E','S','T',0};
  cout << zeichenkette2 << endl;
  cout << zeichenkette3 << endl;
  cout << zeichenkette4 << endl;

  wchar_t zeichenkette5[] = L"TEST äöü";
  wcout << zeichenkette5 << endl;

  cin.getline(zeichenkette1, sizeof(zeichenkette1));
  cout << zeichenkette1 << endl;

  strncpy(zeichenketteX, zeichenkette1, 9);
  zeichenketteX[9] = 0;
  cout << zeichenketteX << endl;
  if(strcmp(zeichenketteX,"aaa")){
    cout << "aaa ist vorhanden" << endl; 
  }
  else{
    cout << "aaa ist nicht vorhanden" << endl; 
  }
  return 0;
}
