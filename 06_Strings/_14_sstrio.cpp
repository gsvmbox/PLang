// _14_sstrio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// sstrio.cpp
// ����/����� ��� ������ string
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  string full_name, nickname, address;
  string greeting ( "������������, " );

  cout << "������� ���� ���: ";
  getline ( cin, full_name ); //(����� �����, ����������)
  cout << "���� ���: " << full_name << endl;

  cout << "������� ��� ���������: ";
  cin >> nickname;

  greeting += nickname;
  cout << greeting << endl;

  cout << "������� ��� ����� � ��������� �����\n";
  cout << "��������� ����� ������ '%'\n";
  getline ( cin, address, '%' ); //(����� �����, ����������, ����� ��������� �����)
  cout << "��� �����: " << address << endl;

  return 0;
}

/*���� � ����� �������������� �����, ������ � ����������� ��� ���������� ����.
�������� << � >> ����������� ��� ������������� � ��������� ������ string, 
����� getline() ��������� ����, ������� ����� ��������� ������� ��� ��- ������� �����.*/


