#include "stdafx.h"
#include <Windows.h>


// safetyin.cpp
// защита от переполнени€ буфера
#include <iostream>
#include <iomanip>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);  
  const int MAX =5;          // максимальный размер строки
  char str [ MAX ];           //  строка

  cout << "\n¬ведите строку: ";
  cin >> setw ( MAX ) >> str; // ввод не более чем MAX символов
  cout << "¬ы ввели: " << str << endl;

//»нициализаци€ строки при объ€влении
  char cstr [] = "»нициализаци€ строки при объ€влении";
  cout<<cstr<<endl;

  return 0;
}

