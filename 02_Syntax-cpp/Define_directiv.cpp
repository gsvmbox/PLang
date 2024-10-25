//---------------------------------------------------------------------------
#include <iostream>


//---------------------------------------------------------------------------

#pragma argsused
int main()
{
  #define PI 3.1415926
  #define CIRC(x) (PI*(x)*(x))
  #define ELL(x,y) (PI*(x)*(y))

  float R1,R2;
  cout<<"Double Pi constant: "<<2*PI<<endl;
  cout<<"Circle square: "<<CIRC(4.)<<endl;
  cout<<endl<<"Input ellipse semi-axis:";
  cin>>R1>>R2;
  cout<<endl<<"Ellipse square: "<<ELL(R1,R2)<<endl;

        return 0;
}
//---------------------------------------------------------------------------
