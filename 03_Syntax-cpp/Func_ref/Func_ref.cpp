// Func_ref.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// �������� ��������� �� ������
#include <iostream>

using namespace std;

  void centimize ( double& ); // �������� �������

int main ( )
{
  double var = 10.0;          // �������� ���������� var ����� 10 (������)
  cout << "var = " << var << " inches" << endl;

  centimize ( var );         // ������� ������ � ����������
  cout << "var= " << var << " centimeters" << endl;

cin.get();
  return 0;
}
///////////////////////////////////////////////////////////
void centimize ( double& v )
{
	cout<<"Argument addres: "<<&v<<endl;
	cout<<"Argument value: "<<v<<endl;
	v = v * 2.54;              
}
