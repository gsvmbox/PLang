// _04_lines.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// linesin.cpp
// ���� ���������� �����, ����������� �������� "������� ������"
#include <iostream>
#include <Windows.h>

using namespace std;
const int MAX = 2000; // ������������ ����� ������
char str [ MAX ];     // ���� ������
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  cout << "\n������� ������. ������ ��������� ����� - %:\n";
  cin.get ( str, MAX, '%' );
  cout << "�� �����:\n" << str << endl;
  return 0;
}



