#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char x[] = "Hello World";
  char y[] = "Hello World";
  if (strlen(x) == strlen(y))
  {
    cout << "Length of both the strings are equal";
  }
  else
  {
    cout << "Length of the both the strings are not equal";
  }
  return 0;
}

