// _06_strcpy.cpp : Defines the entry point for the console application.
#include "stdafx.h"
// strcopy2.cpp
// ����������� ������ �������� strcpy ( )

#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  char str1 [ ] = "����������� ������ �������� strcpy ( )";

  const int MAX = 80;   // ������������ ����� ������
  char str2 [ MAX ];    // ���� ������

  strcpy( str2, str1 ); // �������� ������

  cout << str2 << endl; // � ���������� ���������

  return 0;
}


