
// DTypes.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>//�������������� ���������� (�������� ��������� <math.h> ����������� ���������� C � ��������� ��������� ����� � std ������������ ����)
#include <bitset>//�����-������ ��� �������� � ��������� �������
#include <limits>//���������� ����������� � ������������ ��������, ��� ���������� ��������� ����


using namespace std;


int main(int argc, char* argv[])
{//���������� ��������� � �������������� �����

	setlocale(LC_ALL, "Russian");
	
	float p;
	const float x = -2.5, y = 2.0;
	const float pi = 3.1415926;
	const float Rad = 45 / 180 * pi;


	p = x * y + sqrt(y) + 1 / (sin(x * Rad) + cos(y * Rad));
	cout << "Result is: " << p << endl << '\n';

	//����� �������������� �����
	cout << "Casting to int: " << static_cast<int>(p) << '\n';
	cout << "... to int (old shcool C): " << int(p) << endl;
	cout << "... to bool: " << static_cast<bool>(p) << endl;
	cout << "... to char: " << static_cast<char>(p) << endl << endl;

	//�������������� ������� ������
	int aa = 123;

	cout << "Binary " << "aa = " << bitset<16>(aa) << endl;
	cout << "Hex " << "aa = " << hex << aa << dec << endl << endl;

	/*������� ���������� ����� ���������� � ��������� �������:
	����� ���������� ��������� �������� ��������������, ����������, ������� ��������, �������� ���������, � ����� 2-�� ��� 3-�� �������� �������� �?:�; �������� ��������� ���������� � ����������� ����;
    ����� ����������� ������������;
    ����� ��������� ��������� �������;
    ����� ��������� �������� ������������� ��������;
    ����� ���������� ��������� ����������� switch �������� ���������� � �������������� ����;
    ����� ���������� ��������� ����������� if, for, while, do-while �������� ���������� � ���� bool.
	*/
	/*��������������, ��� ������� �� ���������� ������ ����������, ������ �����������.
	���� �������, ��� �������������� �� ���� � ������� ������������ � ���� � ������� �����������.
	��������:
	bool -> char -> short -> int -> double -> long double
	bool -> char -> short -> int -> long -> long long
	unsigned char -> unsigned short -> unsigned int -> unsigned long
	float -> double -> long double*/

	short a = 'g'; cout <<"�������������� �� char � short: " << a << endl<<endl;// �������������� �� char � short
	int b = 10;
	double c = b; // �������������� �� int � double
	float d = 3.4;
	double e = d; // �������������� �� float � double
	double f = 35; // �������������� �� int � double

	//������� ���������� ����� ������
	cout << "Build-in INT_type size:" << endl;
	cout << "from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
	cout << "size " << sizeof(int);

	//cin.get();
	return 0;
}

