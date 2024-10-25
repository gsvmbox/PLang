// Mass_oper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int SIZE=3;
int R[SIZE];

//::::::::::::::::::Функции:::::::::::::::::::::::::
//---------------------------------------------------
void Mult(int m[SIZE][SIZE],int v[SIZE])
{ //Умножение масивов
int Res[SIZE];        //

for (int i=0;i<=SIZE-1;i++)
 {
  R[i]=0;
  for (int j=0;j<=SIZE-1;j++)
  {
   Res[j]=m[i][j]*v[j];
   R[i]=R[i]+Res[j];
  }
 }
}
//-----------------------------------------------------
//-----------------------------------------------------
int _MAX(int Mass[SIZE])
{ //Определение  максимума

 int maxim=Mass[0];

 for (int i=1;i<=SIZE-1;i++)
 {
  if (Mass[i]>maxim)
  {
   maxim=Mass[i];
  }
 }
 return maxim;
}
//------------------------------------------------------
//-----------------------------------------------------
int _MIN(int Mass[SIZE])
{ //Определение  минимума

 int minim=Mass[0];

 for (int i=1;i<=SIZE-1;i++)
 {
  if (Mass[i]<minim)
  {
   minim=Mass[i];
  }
 }
 return minim;
}
//------------------------------------------------------
//:::::::::::::::::::::::::::::::::::::::::::::::::::::

/* Основная программа */


int main(int argc, _TCHAR* argv[])
{
int M[SIZE][SIZE];
int V[SIZE];
int Maximum=0,Minimum=0;

//-----------Ввод элементов массивов----------------
 cout<<"Enter the entire of massivs V and M";
 for (int i=0;i<=SIZE-1;i++)
 {
  cout<<endl<<"Enter vector element V["<<i<<"]=";
  cin>>V[i];
  for (int j=0;j<=SIZE-1;j++)
  {
   cout<<"Enter matrix element M["<<i<<","<<j<<"]=";
   cin>>M[i][j];
  }
 }

 Mult(M,V);             //Вычисление произведения
 Maximum = _MAX(R);     //Определение максимального элемента
 Minimum = _MIN(R);     //Определение минимального элемента

//-----------Вывод результатов--------------------------
 cout<<endl<<"---Results---";
 for (int i=0;i<=SIZE-1;i++)
 {
  cout<<endl<<"R["<<i<<"] = "<<R[i];
 }

 cout<<endl<<endl<<"The minimal element of R = "<<Minimum;
 cout<<endl<<"The maximal element of R = "<<Maximum;

 //cin.get();
 system("pause");

	return 0;
}

