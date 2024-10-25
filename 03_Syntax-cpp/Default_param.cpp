//---------------------------------------------------------------------------
#include <iostream>


double Arh(double V=1, double P=0.5, double PH20=1,
           double G=9.81);

int main()
{
  double F, vol;

  F=Arh();
  cout<<endl<<F<<endl;
  cout<<endl<<"Input new value of Volume: ";
  cin>>vol;
  F=Arh(vol);
  cout<<endl<<F<<endl;


        return 0;
}
//---------------------------------------------------------------------------

double Arh(double V, double P, double PH20, double G)
{
  return G*V*(PH20-P);
}
