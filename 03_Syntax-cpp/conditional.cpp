//---------------------------------------------------------------------------
#include<iostream>

//---------------------------------------------------------------------------
int main()
{
 char x;
 char choice='y';

 while(choice=='y')
 {
   cout<<endl<<"Input element name: ";
   cin>>x;
   cout<<endl;
   switch (x)
   {
     case 'R': case 'r': {cout<<x<<" - Resistor"<<endl; break;}
     case 'C': case 'c': {cout<<x<<" - Capacitor"<<endl; break;}
     case 'L': case 'l': {cout<<x<<" - Inductance"<<endl; break;}
     
     default: cout<<"Wrong name!"<<endl;
   }

   cout<<endl<<"Try again? (y/n): ";
   cin>>choice;
 }

        return 0;
}
//---------------------------------------------------------------------------
 