
// DTypes.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>//математическая библиотека (Включает заголовок <math.h> стандартной библиотеки C и добавляет связанные имена в std пространство имен)
#include <bitset>//класс-шаблон для операций с двоичными числами
#include <limits>//определяют минимальные и максимальные значения, для переменных заданного типа


using namespace std;


int main(int argc, char* argv[])
{//Вычисление выражений и ѕреобразование типов

	setlocale(LC_ALL, "Russian");
	
	float p;
	const float x = -2.5, y = 2.0;
	const float pi = 3.1415926;
	const float Rad = 45 / 180 * pi;


	p = x * y + sqrt(y) + 1 / (sin(x * Rad) + cos(y * Rad));
	cout << "Result is: " << p << endl << '\n';

	//явное преобразование типов
	cout << "Casting to int: " << static_cast<int>(p) << '\n';
	cout << "... to int (old shcool C): " << int(p) << endl;
	cout << "... to bool: " << static_cast<bool>(p) << endl;
	cout << "... to char: " << static_cast<char>(p) << endl << endl;

	//преобразование формата вывода
	int aa = 123;

	cout << "Binary " << "aa = " << bitset<16>(aa) << endl;
	cout << "Hex " << "aa = " << hex << aa << dec << endl << endl;

	/*Неявное приведение типов происходит в следующих случаях:
	после вычисления операндов бинарных арифметических, логических, битовых операций, операций сравнения, а также 2-го или 3-го операнда операции «?:»; значения операндов приводятся к одинаковому типу;
    перед выполнением присваивания;
    перед передачей аргумента функции;
    перед возвратом функцией возвращаемого значения;
    после вычисления выражения конструкции switch значение приводится к целочисленному типу;
    после вычисления выражений конструкций if, for, while, do-while значение приводится к типу bool.
	*/
	/*преобразования, при которых не происходит потеря информации, явл¤ютс¤ безопасными.
	 как правило, это преобразования от типа с меньшей разрядностью к типу с большей разр¤дностью.
	Например:
	bool -> char -> short -> int -> double -> long double
	bool -> char -> short -> int -> long -> long long
	unsigned char -> unsigned short -> unsigned int -> unsigned long
	float -> double -> long double*/

	short a = 'g'; cout <<"преобразование из char в short: " << a << endl<<endl;// преобразование из char в short
	int b = 10;
	double c = b; // преобразование из int в double
	float d = 3.4;
	double e = d; // преобразование из float в double
	double f = 35; // преобразование из int в double

	//Размеры встроенных типов данных
	cout << "Build-in INT_type size:" << endl;
	cout << "from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
	cout << "size " << sizeof(int);

	//cin.get();
	return 0;
}

