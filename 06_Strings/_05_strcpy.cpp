// _05_strcpy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// strcopy1.cpp
// ����������� ������ � �������������� �����
#include <Windows.h>
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
   SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
	// �������� ������
  char str1 [ ] = "����������� ������ �  �����";

  const int MAX = 80; // ������������ ����� ������
  char str2 [ MAX ];  // ����� ������

  for ( int j = 0; j < strlen ( str1 ); j++ ) // �������� strlen ( str1 )
    str2 [ j ] = str1 [ j ];                  // �������� �� str1 � str2
  
  str2 [ strlen ( str1 ) ] = '\0';                          // ��������� ������ �����
  cout << str2 <<" "<< endl<<strlen(str1)<< endl;                       // � ������� �� �����

  return 0;
}


