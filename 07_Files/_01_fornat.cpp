
// formato.cpp
// ��������������� ����� � ���� � �������������� <<
#include <fstream>        // ��� ��������� �����/������
#include <iostream>
#include <string>
using namespace std;

int main()
  {

 char ch = 'R';
  int j = 77;
  double d = 6.02;
  string str1 = "Mos";  // ������ ���
  string str2 = "Polytech"; // ��������

  ofstream outfile("fdata.txt"); //������� ������ ofstream

  outfile << ch  <<' ' << j << ' ' << d <<' ' <<  str1 << ' ' << str2;

  cout << "File is recorded\n";

outfile.close();

  char _ch;
  int _j;
  double _d;
  string _str1;
  string _str2;

  ifstream infile("fdata.txt");// ������� ������ ifstream 

  if(infile)						//���� ���� ����������
  {                               // ������� (��������) �� ���� ������
	infile >> _ch >> _j >> _d >> _str1 >> _str2;

	cout << _ch << endl            // ������� ������
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


