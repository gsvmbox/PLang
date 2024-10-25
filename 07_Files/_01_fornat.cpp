
// formato.cpp
// Форматированный вывод в файл с использованием <<
#include <fstream>        // для файлового ввода/вывода
#include <iostream>
#include <string>
using namespace std;

int main()
  {

 char ch = 'R';
  int j = 77;
  double d = 6.02;
  string str1 = "Mos";  // строки без
  string str2 = "Polytech"; // пробелов

  ofstream outfile("fdata.txt"); //создать объект ofstream

  outfile << ch  <<' ' << j << ' ' << d <<' ' <<  str1 << ' ' << str2;

  cout << "File is recorded\n";

outfile.close();

  char _ch;
  int _j;
  double _d;
  string _str1;
  string _str2;

  ifstream infile("fdata.txt");// создать объект ifstream 

  if(infile)						//если файл существует
  {                               // извлечь (прочесть) из него данные
	infile >> _ch >> _j >> _d >> _str1 >> _str2;

	cout << _ch << endl            // вывести данные
      << _j << endl
      << _d << endl
      << _str1 << endl
      << _str2 << endl;
  }
  else
	  cout<<"no file";

  infile.close();
  return 0;
  }


