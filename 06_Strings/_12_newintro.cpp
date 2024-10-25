#include "stdafx.h"

//newintro.cpp
//использование оператора new

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char  *str = "And pigs might fly.";
  int len = strlen(str);     //вычисление длины строки

  char *ptr;                 //определение переменной
  ptr = new char [len+1];    //выделение памяти

  strcpy(ptr,str);           //копирование строки str в ptr
  cout<<"ptr = "<<ptr<<endl; //вывод содержимого ptr
  cout<<"str = "<<str<<endl; //вывод содержимого str


  char  *strnew = "And pigs might fly, realy.";
  int newlen = strlen(strnew);

  ptr = new char [newlen+1];    //выделение памяти
  
  strcpy(ptr,strnew);
  cout<<"ptr = "<<ptr<<endl; //вывод содержимого ptr
  cout<<"str = "<<strnew<<endl; //вывод содержимого str
  
  delete [] ptr;             //освобождение выделенной памяти

  return 0;
}

