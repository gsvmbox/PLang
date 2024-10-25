
#include "stdafx.h"

// определение и присвоение для строк
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  string s1 ( "Fish" );
  string s2 = "Meat";
  string s3;

  s3 = s1; //присвоение строк
  cout << "s3 = " << s3 << endl;

  s3 = "No " + s1 + " no "; //объединение строк (конкатенация)
  s3 += s2;
  cout << "s3 = " << s3 << endl;

  s1.swap ( s2 ); //меняет местами значения двух строковых объектов
  cout << s1 << " not " << s2 << endl;

  return 0;
}



