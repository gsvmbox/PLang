
#include "stdafx.h"

// ����������� � ���������� ��� �����
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  string s1 ( "Fish" );
  string s2 = "Meat";
  string s3;

  s3 = s1; //���������� �����
  cout << "s3 = " << s3 << endl;

  s3 = "No " + s1 + " no "; //����������� ����� (������������)
  s3 += s2;
  cout << "s3 = " << s3 << endl;

  s1.swap ( s2 ); //������ ������� �������� ���� ��������� ��������
  cout << s1 << " not " << s2 << endl;

  return 0;
}



