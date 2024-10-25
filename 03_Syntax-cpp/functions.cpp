//---------------------------------------------------------------------------
#include <iostream>
using namespace std;


int multiply(int, int);
void showResult(int);

int main()
{
  int x,y, Result;
 
  cout<<endl<<"Enter the first value: ";
  cin>>x;
  cout<<"Enter the second value: ";
  cin>>y;
  Result=multiply(x,y);
  showResult(Result);
  
 //Лямбда выражения (компактные функторы) --> в ООП)
 //[](){std::cout << "Lambda-hello" << std::endl;} ();
  /*auto hello { [](){std::cout << "Hello-Lambda" << std::endl;} };
  hello();*/
  
 /*  auto sum { [](int a, int b){return a + b;} };
 
    cout << sum(10, 23) << endl;  
 
    int result { sum(1, 4)};
    cout << result << endl;       
*/
        return 0;
}
//---------------------------------------------------------------------------

int multiply(int a, int b)
{
  return a*b;
}

void showResult(int res)
{
  cout<<"The result is: "<<res<<endl;
}

