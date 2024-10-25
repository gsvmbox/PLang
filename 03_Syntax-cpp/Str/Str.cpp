// Str.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Контрольная сумма строки с исключением цифр из строки

 char choice='y';
 char name[20];
 int code,summa=0,i;
 while(choice=='y')
 {
  cout<<endl<<"Input you name: ";
  cin>>name;
  for(i=0;i<=strlen(name)-1;i++)
  {
   code=name[i];
   if ((code<48) || (code>57))
   {cout<<endl<<name[i]<<" - "<<code;
    summa=summa+code;
   }
   else
   {
    cout<<endl<<"You wrong! Symbol "<<name[i]<<" is invalid!";
    }
  }
 cout<<endl<<"Control sum is: "<<summa<<". Lenths - "<<strlen(name);
 cout<<endl<<"Try again ? (y/n)";
 cin>>choice;
  }
	return 0;
}

