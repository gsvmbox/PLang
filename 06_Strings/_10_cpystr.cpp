
#include "stdafx.h"

// copystr.cpp
// копирует одну строку в другую
#include <iostream>
using namespace std;

int main ( )
{
  void copystr ( char*, const char* ); // прототип функции
  char* str1 = "Haste make waste!";
  char str2 [ 80 ];                    // пустая строка

  copystr ( str2, str1 );              // копируем строку str1 в str2
  cout << str2 << endl;                // вывод результата

  return 0;
}
///////////////////////////////////////////////////////////
void copystr ( char* dest, const char* src )
{
	while ( *src )      // пока не достигнут конец строки
    *dest++ = *src++;   // копируем ее
	
  *dest = '\0';       // конец строки
}


//#include <string.h>
//strcpy(char* dest,const char* src);

/*     const char* src; - указатель на константу
       нельзя изменять значение переменной, но
       можно изменять значение указателя

       char* const src; - константный указатель
       нельзя изменять указатель, но можно
       изменять значение переменной
*/
