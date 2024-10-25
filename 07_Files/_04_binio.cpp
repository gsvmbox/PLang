
// binio.cpp
// �������� ����/����� ������������� ������
#include <fstream>         // ��� �������� �������
#include <iostream>
using namespace std;

const int MAX = 100;       // ������ ������
int buff[MAX];             // ����� ��� ����� �����

int main()
  {
  for(int j=0; j<MAX; j++) // ��������� ����� �������
	buff[j] = j;           // (0, 1, 2, ...)
                           // ������� �������� �����
  ofstream os("edata.dat", ios::binary);
                           // �������� � ����
  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int) );
    cout << "Bytes write: " << os.tellp()<<endl;

  os.close();              //  ������� ���

  for(int j=0; j<MAX; j++)     // ������� �����
    buff[j] = 0;
                           
  // ������� ������� �����
  ifstream is("edata.dat", ios::binary);
                           // ������ �� ����
//is.seekg(0,ios_base::end); //������������ � ����� �����
//is.seekg(10,ios_base::end); //������������ �� 10 ������ � �����
//is.seekg(30,ios_base::beg); //������������ �� 31-� ����
//is.seekg(3,ios_base::cur); //������������ �� 3 ����� �� ������� �������
//is.seekg(3); //������������ �� 3 ����� - ����������
  is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  cout << "Bytes read: " << is.tellg()<<endl;

  for(int j=0; j<MAX; j++)     // �������� ������
  {
	  if( buff[j] != j )
      { cerr << "Data is InCorrect!\n"; return 1; }

	cout<<buff[j]<<" ";
  }
  cout << "Data is correct\n";
  is.close();
  

  return 0;
  }


