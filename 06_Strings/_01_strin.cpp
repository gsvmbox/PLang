
#include "stdafx.h"
#include <Windows.h>


// stringin.cpp
// ������� ���������� ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  //setlocale(LC_ALL, "Russian");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  const int MAX = 20; // ������������ ������ ������
  char str [ MAX ];   // ���� ������

  cout << "������� ������: ";          // ���� ������
  cin >> str;

  cout << "�� �����: " << str << endl; // ����� ����������
  cout<<*str<<" "<<&str<<endl;

  cout<<sizeof(str)<<endl;

  for(int i=0;i<=MAX;i++)
  {
	cout<<str[i]<<" "<<&str + i<<" "<<&str[i]<<endl;
  }

  return 0;
}


