//---------------------------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x;
 char choice='y';
 while(choice=='y')
 {
   cout<<"Input positive number: ";
   cin>>x;
   /*switch(x)
    {
     case 1:
     case 3:
     case 5:
     case 7:
     case 9:
              cout<<" - Even number";
     break;
     case 2:
     case 4:
     case 6:
     case 8:
              cout<<" - Odd number";
     break;
    }*/
   if(x/2. == floor(x/2.))
   {
    cout<<" - Odd number";
   }
   else
   {
    cout<<" - Even number";
   }
   cout<<endl<<"Try again? (y/n): ";
   cin>>choice;
 }

        return 0;
}
//---------------------------------------------------------------------------
 