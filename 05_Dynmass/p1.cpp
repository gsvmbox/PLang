
#include <iostream>
 using namespace std;


int main()
{
setlocale(0, "");

  int n;

  while(true)
  {

  cout << "������� ������ �������: ";
  cin >> n;

  cout << "������� " << n << " ��������: "<<endl; 
                                        
  int *din_array = new int [n];    // �������
                                        // ������������ ������
  for (int i = 0; i < n; i++) { 
    cin >> din_array[i];  // ���������� ����� � ������ �������
  }

  cout << "����� �������: "<<endl;

  // ����� ������� � �������������� ��������
  for (int i = 0 ; i < n; i++) {
    cout << din_array[i] << " ";  
  }

cout<<"\n\n";

// ��������� � ������ � ��������� ��������
for (int i = 0; i < n; i++)
{
    cout << *(din_array + i)<<" ";
	cout<<din_array + i<< " ";
}
cout << "\n\n";

// �������������  ���������������� ���������
for (int* q = din_array; q != din_array + n; q++)
{
    cout << *q << " ";
	cout<<q<<" ";
}
cout << "\n\n";


  cout << endl << "�������� �������"<<endl;
  
  delete [] din_array;  // ������� ������������ ������

  }
 
	return 0;
}

