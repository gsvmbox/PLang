
// ochar.cpp
// Посимвольный файловый вывод 
#include <fstream>                // для файловых функций
#include <iostream>
#include <string>
using namespace std;

int main()
  {
  string str = "The number of books published on C++ and related topics far exceeds  "
           "the number that any rational person could hope to read.";

  ofstream outfile("TEST.TXT");   // Создать выходной файл
  for(int j=0; j<str.size(); j++) // каждый символ
    outfile.put( str[j] );        // записывать в файл
  cout << "File is recorded\n";
outfile.close();

  char ch;                     // символ для считывания
  ifstream infile("TEST.TXT"); // входной файл
  while( infile )              // читать до EOF или ошибки
    {
    infile.get(ch);            // считать символ
    cout << ch;                // и вывести его
    }
  cout << endl;
infile.close();

  ifstream _infile("TEST.TXT"); // создать входной файл
  cout << _infile.rdbuf();      // передать его буфер в cout
  cout << endl;
  _infile.close();

  return 0;
  }


