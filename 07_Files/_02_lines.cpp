
// oline.cpp
// �������� ����� ����� � ���������
#include <fstream>              // ��� ��������
                                // ��������� �����/������
#include <iostream>
using namespace std;

int main()
  {
  ofstream outfile("test.txt"); // ������� �������� ���� 
                                // ��������� ����� � ����
  outfile << "Stack Overflow helps people find the answers they need,\n";
  outfile << "when they need them.\n";
  outfile << "We're best known for our public Q&A platform \n";
  outfile << "that millions of people visit every month to ask questions.\n";
outfile.close();
	 
  const int MAX = 80;          // ������ ������
  char buffer[MAX];            // ����� �������� 
  ifstream infile("test.txt"); // ������� ������� ����
  while( !infile.eof() )       // ���� �� EOF
    {
    infile.getline(buffer, MAX); // ������ ������ ������
    cout << buffer << endl;      // � ������� ��
    }

  return 0;
  }




