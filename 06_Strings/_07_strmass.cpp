
#include "stdafx.h"


// straray.cpp
// ������ �����
#include <iostream>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  const int DAYS = 7; // ���������� ����� � �������
  const int MAX = 12; // ������������ ����� ������ �� ���

  // ������ �����
  char star [ DAYS ][ MAX ] =
  {
    "Sunday","Mondey","Tuesday","Wednesday",
    "Thursday","Friday","Saturday"
  };

  // ����� ���� ����� �� �����
  for ( int j = 0; j < DAYS; j++ )
    cout << star [ j ] << endl;

  cout<<endl;

 // cout<<star[0][0]<<endl;
  for ( int j = 0; j < DAYS; j++ )	//����� ������� ����� �����������
  {
	  for(int i = 0; i < MAX; i++ )
		cout << star [ j ][ i ];

	cout<<endl;
  }

  return 0;
}



