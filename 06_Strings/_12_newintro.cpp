#include "stdafx.h"

//newintro.cpp
//������������� ��������� new

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char  *str = "And pigs might fly.";
  int len = strlen(str);     //���������� ����� ������

  char *ptr;                 //����������� ����������
  ptr = new char [len+1];    //��������� ������

  strcpy(ptr,str);           //����������� ������ str � ptr
  cout<<"ptr = "<<ptr<<endl; //����� ����������� ptr
  cout<<"str = "<<str<<endl; //����� ����������� str


  char  *strnew = "And pigs might fly, realy.";
  int newlen = strlen(strnew);

  ptr = new char [newlen+1];    //��������� ������
  
  strcpy(ptr,strnew);
  cout<<"ptr = "<<ptr<<endl; //����� ����������� ptr
  cout<<"str = "<<strnew<<endl; //����� ����������� str
  
  delete [] ptr;             //������������ ���������� ������

  return 0;
}

