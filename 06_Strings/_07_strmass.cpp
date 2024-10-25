
#include "stdafx.h"


// straray.cpp
// массив строк
#include <iostream>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  const int DAYS = 7; // количество строк в массиве
  const int MAX = 12; // максимальна€ длина каждой из них

  // массив строк
  char star [ DAYS ][ MAX ] =
  {
    "Sunday","Mondey","Tuesday","Wednesday",
    "Thursday","Friday","Saturday"
  };

  // вывод всех строк на экран
  for ( int j = 0; j < DAYS; j++ )
    cout << star [ j ] << endl;

  cout<<endl;

 // cout<<star[0][0]<<endl;
  for ( int j = 0; j < DAYS; j++ )	//¬ывод массива строк посимвольно
  {
	  for(int i = 0; i < MAX; i++ )
		cout << star [ j ][ i ];

	cout<<endl;
  }

  return 0;
}



