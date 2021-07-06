#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char str_var1[20] = "Hello World!";
  char str_var2[20] = "Hello AI";
  int k;
  k = strncmp(str_var1, str_var2, 8);
  if (k == 0)
  {
    cout << "String are equal upto specified characters.";
  }
  else
  {
    cout << "Strings are not equal upto the specified characters.";
  }
  return 0;
}
