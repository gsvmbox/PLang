
// oline.cpp
// файловый вывод строк с пробелами
#include <fstream>              // для операций
                                // файлового ввода/вывода
#include <iostream>
using namespace std;

int main()
  {
  ofstream outfile("test.txt"); // создать выходной файл 
                                // отправить текст в файл
  outfile << "Stack Overflow helps people find the answers they need,\n";
  outfile << "when they need them.\n";
  outfile << "We're best known for our public Q&A platform \n";
  outfile << "that millions of people visit every month to ask questions.\n";
outfile.close();
	 
  const int MAX = 80;          // размер буфера
  char buffer[MAX];            // буфер символов 
  ifstream infile("test.txt"); // создать входной файл
  while( !infile.eof() )       // цикл до EOF
    {
    infile.getline(buffer, MAX); // читает строку текста
    cout << buffer << endl;      // и выводит ее
    }

  return 0;
  }




