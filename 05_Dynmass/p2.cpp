
#include <iostream>

using namespace std;

	void print(int** mas);
	int rows = 3;       // количество строк
    int columns = 2;    // количество столбцов
 
int main()
{
	setlocale(0, "");

  

     // выделяем память под двумерный массив
    int** numbers = new int*[rows]; //Вначале выделяем память для массива указателей
    for (int i=0; i < rows; i++)
    {
        numbers[i] = new int[columns]; //Затем в цикле выделяем память для каждого отдельного массива 
    }
 
    // вводим данные для таблицы rows x columns
    for (int i=0; i < rows; i++)
    {
        cout << "Введите данные " << (i + 1) << " строки" << endl;
        // вводим данные для столбцов i-й строки
        for (int j=0; j < columns; j++)
        {
            cout << (j + 1) << " столбца: ";
            cin >> numbers[i][j];
        }
    }
    // вывод данных

print(numbers);

     
    /*Освобождение памяти идет в обратном порядке - 
	сначала освобождаем память для каждого отдельного вложенного массива, 
	а затем для всего массива указателей.	*/

	for (int i=0; i < rows; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;

	return 0;
}

void print(int** mas)
{

	cout<<mas<<endl; //адрес указателя на массив указателей**
	//cout<<**numbers<<endl;
    for (int i=0; i < rows; i++)
    {
        cout<<(mas+i)<<"\t";		//адреса ячеек массива указателей**
		cout<<*(mas+i)<<"\t";	//содержимое ячеек массива указателей**
		// выводим данные столбцов i-й строки
        for (int j=0; j < columns; j++)
        {
            cout << mas[i][j] << "\t"; //значение по адресу
			cout << (mas[i]+j)<< "\t";  //адрес
		}
        cout << endl;
    }
}