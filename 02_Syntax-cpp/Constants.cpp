//---------------------------------------------------------------------------
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------


int main()
{
  const double Pi=3.1415926;
  const double Pi2=2*Pi;
  
  enum color {red, yellow=6, green};

  cout<<endl<<Pi<<endl<<Pi2<<endl;
  
  cout<<red<<endl;
  cout<<color(yellow)<<endl;
  cout<<color{green}<<endl;

        return 0;
}
//---------------------------------------------------------------------------
 