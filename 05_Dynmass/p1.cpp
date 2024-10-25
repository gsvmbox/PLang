
#include <iostream>
 using namespace std;


int main()
{
setlocale(0, "");

  int n;

  while(true)
  {

  cout << "¬ведите размер массива: ";
  cin >> n;

  cout << "¬ведите " << n << " значений: "<<endl; 
                                        
  int *din_array = new int [n];    // создаем
                                        // динамический массив
  for (int i = 0; i < n; i++) { 
    cin >> din_array[i];  // записываем числа в €чейки массива
  }

  cout << "¬ывод массива: "<<endl;

  // ¬ывод массива с использованием индексов
  for (int i = 0 ; i < n; i++) {
    cout << din_array[i] << " ";  
  }

cout<<"\n\n";

// добавл€ем к адресу в указателе смещение
for (int i = 0; i < n; i++)
{
    cout << *(din_array + i)<<" ";
	cout<<din_array + i<< " ";
}
cout << "\n\n";

// использование  вспомогательного указател€
for (int* q = din_array; q != din_array + n; q++)
{
    cout << *q << " ";
	cout<<q<<" ";
}
cout << "\n\n";


  cout << endl << "”даление массива"<<endl;
  
  delete [] din_array;  // удал€ем динамический массив

  }
 
	return 0;
}

