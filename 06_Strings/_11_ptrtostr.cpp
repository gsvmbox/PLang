
#include "stdafx.h"

// ptrtostr.cpp
// массив указателей на строки
#include <iostream>

using namespace std;
const int DAYS = 7;

int main ( )
{
  // массив указателей на строки
  char* arrptrs [ DAYS ] = { "Sunday","Mondey","Tuesday","Wednesday",
                             "Thursday","Friday","Saturday" };

  for ( short j = 0; j < DAYS; j++ ) // Вывод строк
    cout << arrptrs [ j ] << endl;
	  
  return 0;
}


