#include "stdafx.h"
#include <Windows.h>
// blanksin.cpp
// ���� ������ � ���������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  const int MAX = 80; // ������������ ����� ������
  char str [ MAX ];   // ���� ������

  cout << "\n������� ������: ";
  cin.get ( str, MAX ); //��������� �������� ������ � ���������
  cout << "�� �����: " << str << endl;

  return 0;
}



