#include "stdafx.h"
#include <Windows.h>


// safetyin.cpp
// ������ �� ������������ ������
#include <iostream>
#include <iomanip>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);  
  const int MAX =5;          // ������������ ������ ������
  char str [ MAX ];           //  ������

  cout << "\n������� ������: ";
  cin >> setw ( MAX ) >> str; // ���� �� ����� ��� MAX ��������
  cout << "�� �����: " << str << endl;

//������������� ������ ��� ����������
  char cstr [] = "������������� ������ ��� ����������";
  cout<<cstr<<endl;

  return 0;
}

