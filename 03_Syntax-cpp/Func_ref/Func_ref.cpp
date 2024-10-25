// Func_ref.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// передача аргумента по ссылке
#include <iostream>

using namespace std;

  void centimize ( double& ); // прототип функции

int main ( )
{
  double var = 10.0;          // значение переменной var равно 10 (дюймов)
  cout << "var = " << var << " inches" << endl;

  centimize ( var );         // перевод дюймов в сантиметры
  cout << "var= " << var << " centimeters" << endl;

cin.get();
  return 0;
}
///////////////////////////////////////////////////////////
void centimize ( double& v )
{
	cout<<"Argument addres: "<<&v<<endl;
	cout<<"Argument value: "<<v<<endl;
	v = v * 2.54;              
}
