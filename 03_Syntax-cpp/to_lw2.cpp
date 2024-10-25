
#include <iostream>
using namespace std;
//функция для решения задачи 1
void task1()
{
	int a, cnt = 0;
	float mean, sum = 0;
	while (cin>>a) {
		sum = sum + a;
		cnt++;
	}
	cin.clear();											//сбрасывем флаг ошибки после ввода a!=(int)
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	//чистим буфер до  '\n', макс. кол-во символов
															//ограничим numeric_limits<streamsize>::max()
	mean = static_cast<float>(sum / cnt);
	cout << sum << " " << mean << "  " << cnt;

}
//функция для решения задачи 2
void task2()
{}
int main()
{
	setlocale(LC_ALL, "Russian");
	int choice; // в этой переменной будет храниться выбор пользователя
	while (true) // непрерывный цикл
	{		
			cout << endl<<"Что вы хотите выполнить? "<<endl
			<< "1. задание 1"<<endl
			<< "2. задание 2"<<endl
			<< "3. выход"<<endl;
			cin >> choice;
		switch (choice)
		{
		case 1:
		{
			/*вызов функции для решения задания 1*/;
			task1();
			break; // если его не ставить, то после вызова task1(), начнет выполнятся task2()
		}
		case 2:
		{
			/*вызов функции для решения задания 1*/;
			task2();
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}