
// ochar.cpp
// ������������ �������� ����� 
#include <fstream>                // ��� �������� �������
#include <iostream>
#include <string>
using namespace std;

int main()
  {
  string str = "The number of books published on C++ and related topics far exceeds  "
           "the number that any rational person could hope to read.";

  ofstream outfile("TEST.TXT");   // ������� �������� ����
  for(int j=0; j<str.size(); j++) // ������ ������
    outfile.put( str[j] );        // ���������� � ����
  cout << "File is recorded\n";
outfile.close();

  char ch;                     // ������ ��� ����������
  ifstream infile("TEST.TXT"); // ������� ����
  while( infile )              // ������ �� EOF ��� ������
    {
    infile.get(ch);            // ������� ������
    cout << ch;                // � ������� ���
    }
  cout << endl;
infile.close();

  ifstream _infile("TEST.TXT"); // ������� ������� ����
  cout << _infile.rdbuf();      // �������� ��� ����� � cout
  cout << endl;
  _infile.close();

  return 0;
  }


