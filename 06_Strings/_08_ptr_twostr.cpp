#include "stdafx.h"


// twostr.cpp
// �������� ����� ����� ������� � ����� ���������
#include <iostream>

using namespace std;

int main ( )
{
  char str1 [ ] = "Defenition as array";
  char* str2 = "Defenition as pointer";

  cout << str1 << endl; // ����� �����
  cout << str2 << endl;

//str1++;               // �����������
  str2++;               // ���������

  cout << str2 << endl; // �������� str2  ����������

   str2++;               // ���������

  cout << str2 << endl; // �������� str2  ����������

str2--;               // ���������

  cout << str2 << endl; // �������� str2  ����������
  str2--;               // ���������

  cout << str2 << endl; // �������� str2  ����������
  return 0;
}

