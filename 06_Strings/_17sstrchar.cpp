#include "stdafx.h"

// sstrchar.cpp
// доступ к символам в строке
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  char charray [ 20];
  string word;

  cout << "Введите слово: ";
  cin >> word;
  int wlen = word.length ( );     // длина строки
  cout << "По одному символу: ";
  for ( int j = 0; j < wlen; j++ )
    cout << word.at ( j );        // тут будет проверка на выход за пределы строки
   // cout << word [ j ];        // а тут проверки не будет

  word.copy ( charray, wlen, 0 ); // копируем строку в массив
  charray [ wlen ] = 0;
  cout << "\nМассив содержит: " << charray << endl;
  cout<<"Размер строки: "<<word.length ( )<<" символов"<<endl;
  cout<<"Размер строки: "<<word.size ( )<<" символов"<<endl;
  cout<<"Размер строки: "<<word.capacity()<<" байт"<<endl;
  
  return 0;
}

