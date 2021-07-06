#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char str_var1[20] = "Hello World!";
  char str_var2[20] = "Hello World!";
  int Z;
  Z = strcmp(str_var1, str_var2);
  if (Z == 0)
  {
    cout << "String are equal.";
  }
  else
  {
    if (Z > 0)
    {
    cout << "Strings are not equal and first string is greater.";
    }
    else
    {
    cout << "Strings are not equal and the second string is greater.";
    }
  }
  return 0;
}
