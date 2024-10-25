#include "stdafx.h"


// twostr.cpp
// описание строк через массивы и через указатели
#include <iostream>

using namespace std;

int main ( )
{
  char str1 [ ] = "Defenition as array";
  char* str2 = "Defenition as pointer";

  cout << str1 << endl; // вывод строк
  cout << str2 << endl;

//str1++;               // недопостимо
  str2++;               // допустимо

  cout << str2 << endl; // значение str2  изменилось

   str2++;               // допустимо

  cout << str2 << endl; // значение str2  изменилось

str2--;               // допустимо

  cout << str2 << endl; // значение str2  изменилось
  str2--;               // допустимо

  cout << str2 << endl; // значение str2  изменилось
  return 0;
}

