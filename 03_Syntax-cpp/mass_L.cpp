//---------------------------------------------------------------------------
#include<iostream.h>
#include<conio.h>

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
 const int SIZE=3;
 int M[SIZE][SIZE];
 int V[SIZE],R[SIZE],Res[SIZE];
 int max,min,i,j;

 cout<<"Enter the entire of massivs V and M";
 for (i=0;i<=SIZE-1;i++)
 {
  cout<<endl<<"Enter vector element V["<<i<<"]=";
  cin>>V[i];
  for (j=0;j<=SIZE-1;j++)
  {
   cout<<"Enter matrix element M["<<i<<","<<j<<"]=";
   cin>>M[i][j];
  }
 }
    //Умножение масивов
 for (i=0;i<=SIZE-1;i++)
 {
  R[i]=0;
  for (j=0;j<=SIZE-1;j++)
  {
   Res[j]=M[i][j]*V[j];
   R[i]=R[i]+Res[j];
  }
 }
   //Определение минимума и максимума
 min=R[0];max=R[0];
 for (i=1;i<=SIZE-1;i++)
 {
  if (R[i]>max)
  {
   max=R[i];
  }
  if (R[i]<min)
  {
   min=R[i];
  }
 }

   //Вывод результатов
 cout<<endl<<"---Results---";
 for (i=0;i<=SIZE-1;i++)
 {
  cout<<endl<<"R["<<i<<"] = "<<R[i];
 }
 cout<<endl<<endl<<"The minimal element of R = "<<min;
 cout<<endl<<"The maximal element of R = "<<max;


        getch();
        return 0;
}
//---------------------------------------------------------------------------
