// ptrvar.cpp
// ��������� (������ ����������)
#include <iostream>
using namespace std;

int main ( )
{
  int var1 = 11;        // ��� ����������
  int var2 = 22;

  cout << &var1 << endl // ������� ������ ����������
       << &var2 << endl << endl;

  int* ptr; // ��� ����������-��������� �� �����

  ptr = &var1;          // �������� �� �������� ������ var1
  cout << ptr << endl;  // � ������� �� ������

  ptr = &var2;          // ������ �������� ������ var2
  cout << ptr <<" "<< *ptr<< endl;  // � ������� �� ������

  return 0;
}


