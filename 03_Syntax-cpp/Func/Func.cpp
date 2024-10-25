// Func.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int multiply(int, int);
void showResult(int);

int main(int argc, _TCHAR* argv[])
{
	
  int x,y, Result;
  cout<<endl<<"Enter the first value: ";
  cin>>x;
  cout<<"Enter the second value: ";
  cin>>y;
  Result=multiply(x,y);
  showResult(Result);
  cout<<endl<<endl<<"Press any key to continue ...";
  system("pause");
 

	return 0;
}

int multiply(int a, int b)
{
  return a*b;
}

void showResult(int res)
{
  cout<<"The result is: "<<res<<endl;
}
