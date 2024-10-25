// _04_lines.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// linesin.cpp
// ввод нескольких строк, разделенных символом "перевод строки"
#include <iostream>
#include <Windows.h>

using namespace std;
const int MAX = 2000; // максимальная длина строки
char str [ MAX ];     // сама строка
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  cout << "\nВведите строки. Символ окончания ввода - %:\n";
  cin.get ( str, MAX, '%' );
  cout << "Вы ввели:\n" << str << endl;
  return 0;
}



