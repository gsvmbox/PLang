
// binio.cpp
// Двоичный ввод/вывод целочисленных данных
#include <fstream>         // для файловых потоков
#include <iostream>
using namespace std;

const int MAX = 100;       // размер буфера
int buff[MAX];             // буфер для целых чисел

int main()
  {
  for(int j=0; j<MAX; j++) // заполнить буфер данными
	buff[j] = j;           // (0, 1, 2, ...)
                           // создать выходной поток
  ofstream os("edata.dat", ios::binary);
                           // записать в него
  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int) );
    cout << "Bytes write: " << os.tellp()<<endl;

  os.close();              //  закрыть его

  for(int j=0; j<MAX; j++)     // стереть буфер
    buff[j] = 0;
                           
  // создать входной поток
  ifstream is("edata.dat", ios::binary);
                           // читать из него
//is.seekg(0,ios_base::end); //Переместится в конец файла
//is.seekg(10,ios_base::end); //Переместится на 10 байтов с конца
//is.seekg(30,ios_base::beg); //Переместится на 31-й байт
//is.seekg(3,ios_base::cur); //Переместится на 3 байта от текущей позиции
//is.seekg(3); //Переместится на 3 байта - аналогично
  is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  cout << "Bytes read: " << is.tellg()<<endl;

  for(int j=0; j<MAX; j++)     // проверка данных
  {
	  if( buff[j] != j )
      { cerr << "Data is InCorrect!\n"; return 1; }

	cout<<buff[j]<<" ";
  }
  cout << "Data is correct\n";
  is.close();
  

  return 0;
  }


