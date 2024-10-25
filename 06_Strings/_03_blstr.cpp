#include "stdafx.h"
#include <Windows.h>
// blanksin.cpp
// ввод строки с пробелами
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  const int MAX = 80; // максимальная длина строки
  char str [ MAX ];   // сама строка

  cout << "\nВведите строку: ";
  cin.get ( str, MAX ); //позволяет записать строку с пробелами
  cout << "Вы ввели: " << str << endl;

  return 0;
}



