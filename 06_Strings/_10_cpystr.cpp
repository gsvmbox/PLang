
#include "stdafx.h"

// copystr.cpp
// �������� ���� ������ � ������
#include <iostream>
using namespace std;

int main ( )
{
  void copystr ( char*, const char* ); // �������� �������
  char* str1 = "Haste make waste!";
  char str2 [ 80 ];                    // ������ ������

  copystr ( str2, str1 );              // �������� ������ str1 � str2
  cout << str2 << endl;                // ����� ����������

  return 0;
}
///////////////////////////////////////////////////////////
void copystr ( char* dest, const char* src )
{
	while ( *src )      // ���� �� ��������� ����� ������
    *dest++ = *src++;   // �������� ��
	
  *dest = '\0';       // ����� ������
}


//#include <string.h>
//strcpy(char* dest,const char* src);

/*     const char* src; - ��������� �� ���������
       ������ �������� �������� ����������, ��
       ����� �������� �������� ���������

       char* const src; - ����������� ���������
       ������ �������� ���������, �� �����
       �������� �������� ����������
*/
