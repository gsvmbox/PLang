// _14_sstrio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// sstrio.cpp
// ввод/вывод для класса string
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  string full_name, nickname, address;
  string greeting ( "Здравствуйте, " );

  cout << "Введите Ваше имя: ";
  getline ( cin, full_name ); //(метод ввода, переменная)
  cout << "Ваше имя: " << full_name << endl;

  cout << "Введите Ваш псевдоним: ";
  cin >> nickname;

  greeting += nickname;
  cout << greeting << endl;

  cout << "Введите Ваш адрес в несколько строк\n";
  cout << "Окончание ввода символ '%'\n";
  getline ( cin, address, '%' ); //(метод ввода, переменная, симво окончания ввода)
  cout << "Ваш адрес: " << address << endl;

  return 0;
}

/*Ввод и вывод осуществляются путем, схожим с применяемым для строкового типа.
Операции << и >> перегружены для использования с объектами класса string, 
метод getline() принимает ввод, который может содержать пробелы или не- сколько строк.*/


