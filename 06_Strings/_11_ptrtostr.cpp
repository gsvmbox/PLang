
#include "stdafx.h"

// ptrtostr.cpp
// ������ ���������� �� ������
#include <iostream>

using namespace std;
const int DAYS = 7;

int main ( )
{
  // ������ ���������� �� ������
  char* arrptrs [ DAYS ] = { "Sunday","Mondey","Tuesday","Wednesday",
                             "Thursday","Friday","Saturday" };

  for ( short j = 0; j < DAYS; j++ ) // ����� �����
    cout << arrptrs [ j ] << endl;
	  
  return 0;
}


