// _06_strcpy.cpp : Defines the entry point for the console application.
#include "stdafx.h"
// strcopy2.cpp
// копирование строки функцией strcpy ( )

#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  char str1 [ ] = "Копирование строки функцией strcpy ( )";

  const int MAX = 80;   // максимальная длина строки
  char str2 [ MAX ];    // сама строка

  strcpy( str2, str1 ); // копируем строку

  cout << str2 << endl; // и показываем результат

  return 0;
}


