//---------------------------------------------------------------------------
#include<iostream.h>
#include<conio.h>

#pragma hdrstop

//---------------------------------------------------------------------------
#pragma argsused
const int SIZE=3;
int R[NUMBER];

//::::::::::::::::::�������:::::::::::::::::::::::::
//---------------------------------------------------
void Mult(int m[NUMBER][NUMBER],int v[NUMBER])
{ //��������� �������
int Res[NUMBER];        //

for (int i=0;i<=NUMBER-1;i++)
 {
  R[i]=0;
  for (int j=0;j<=NUMBER-1;j++)
  {
   Res[j]=m[i][j]*v[j];
   R[i]=R[i]+Res[j];
  }
 }
}
//-----------------------------------------------------
//-----------------------------------------------------
int _MAX(int Mass[NUMBER])
{ //�����������  ���������

 int maxim=Mass[0];

 for (int i=1;i<=NUMBER-1;i++)
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
int _MIN(int Mass[NUMBER])
{ //�����������  ��������

 int minim=Mass[0];

 for (int i=1;i<=NUMBER-1;i++)
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

/* �������� ��������� */

int main(int argc, char* argv[])
{  
int M[NUMBER][NUMBER];
int V[NUMBER];
int Maximum=0,Minimum=0;

//-----------���� ��������� ��������----------------
 cout<<"Enter the entire of massivs V and M";
 for (int i=0;i<=NUMBER-1;i++)
 {
  cout<<endl<<"Enter vector element V["<<i<<"]=";
  cin>>V[i];
  for (int j=0;j<=NUMBER-1;j++)
  {
   cout<<"Enter matrix element M["<<i<<","<<j<<"]=";
   cin>>M[i][j];
  }
 }

 Mult(M,V);             //���������� ������������
 Maximum = _MAX(R);     //����������� ������������� ��������
 Minimum = _MIN(R);     //����������� ������������ ��������

//-----------����� �����������--------------------------
 cout<<endl<<"---Results---";
 for (int i=0;i<=NUMBER-1;i++)
 {
  cout<<endl<<"R["<<i<<"] = "<<R[i];
 }

 cout<<endl<<endl<<"The minimal element of R = "<<Minimum;
 cout<<endl<<"The maximal element of R = "<<Maximum;


        getch();
        return 0;
}
//---------------------------------------------------------------------------
