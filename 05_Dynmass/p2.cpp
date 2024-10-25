
#include <iostream>

using namespace std;

	void print(int** mas);
	int rows = 3;       // ���������� �����
    int columns = 2;    // ���������� ��������
 
int main()
{
	setlocale(0, "");

  

     // �������� ������ ��� ��������� ������
    int** numbers = new int*[rows]; //������� �������� ������ ��� ������� ����������
    for (int i=0; i < rows; i++)
    {
        numbers[i] = new int[columns]; //����� � ����� �������� ������ ��� ������� ���������� ������� 
    }
 
    // ������ ������ ��� ������� rows x columns
    for (int i=0; i < rows; i++)
    {
        cout << "������� ������ " << (i + 1) << " ������" << endl;
        // ������ ������ ��� �������� i-� ������
        for (int j=0; j < columns; j++)
        {
            cout << (j + 1) << " �������: ";
            cin >> numbers[i][j];
        }
    }
    // ����� ������

print(numbers);

     
    /*������������ ������ ���� � �������� ������� - 
	������� ����������� ������ ��� ������� ���������� ���������� �������, 
	� ����� ��� ����� ������� ����������.	*/

	for (int i=0; i < rows; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;

	return 0;
}

void print(int** mas)
{

	cout<<mas<<endl; //����� ��������� �� ������ ����������**
	//cout<<**numbers<<endl;
    for (int i=0; i < rows; i++)
    {
        cout<<(mas+i)<<"\t";		//������ ����� ������� ����������**
		cout<<*(mas+i)<<"\t";	//���������� ����� ������� ����������**
		// ������� ������ �������� i-� ������
        for (int j=0; j < columns; j++)
        {
            cout << mas[i][j] << "\t"; //�������� �� ������
			cout << (mas[i]+j)<< "\t";  //�����
		}
        cout << endl;
    }
}