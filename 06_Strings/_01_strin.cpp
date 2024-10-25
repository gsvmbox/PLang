
#include "stdafx.h"
#include <Windows.h>


// stringin.cpp
// простая переменная строка
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  //setlocale(LC_ALL, "Russian");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  const int MAX = 20; // максимальный размер строки
  char str [ MAX ];   // сама строка

  cout << "Введите строку: ";          // ввод строки
  cin >> str;

  cout << "Вы ввели: " << str << endl; // вывод результата
  cout<<*str<<" "<<&str<<endl;

  cout<<sizeof(str)<<endl;

  for(int i=0;i<=MAX;i++)
  {
	cout<<str[i]<<" "<<&str + i<<" "<<&str[i]<<endl;
  }

  return 0;
}


