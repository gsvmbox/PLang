#include "stdafx.h"

// sstrchar.cpp
// ������ � �������� � ������
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  char charray [ 20];
  string word;

  cout << "������� �����: ";
  cin >> word;
  int wlen = word.length ( );     // ����� ������
  cout << "�� ������ �������: ";
  for ( int j = 0; j < wlen; j++ )
    cout << word.at ( j );        // ��� ����� �������� �� ����� �� ������� ������
   // cout << word [ j ];        // � ��� �������� �� �����

  word.copy ( charray, wlen, 0 ); // �������� ������ � ������
  charray [ wlen ] = 0;
  cout << "\n������ ��������: " << charray << endl;
  cout<<"������ ������: "<<word.length ( )<<" ��������"<<endl;
  cout<<"������ ������: "<<word.size ( )<<" ��������"<<endl;
  cout<<"������ ������: "<<word.capacity()<<" ����"<<endl;
  
  return 0;
}

