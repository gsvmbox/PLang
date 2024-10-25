
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
/*//укороченная форма записи
    if (a>b)       
        cout<<"a больше b";
    cout<<"a меньше b";
*/
/*    //полная форма записи
	if (a>b) 
        cout<<"a больше b";
    else
        cout<<"a меньше b";
*/
/*//использование логических операций при проверке условий
    if(a>b || c>b)   
        cout<<"Условие ИЛИ выполнено";
    else
        cout<<"Условие ИЛИ не выполнено";
*/
/*
    if(a<b && c>b)  //использование логических операций при проверке условий
        cout<<"Условие И выполнено";
    else
        cout<<"Условие И не выполнено";
*/
/*//вложенные операторы if-else
    if(a<b)  
    {
        if(c<b)
            cout<<"Вложенный if TRUE";
        else
            cout<<"Вложенный if FALSE";
    }
    else
        cout<<"Внешний if";
*/ 
/*	//вложенные операторы if-else
    if(a<b) 
        if(b<c)
            if((a+b)>=c)
                cout<<"Все TRUE";
            else
                cout<<"---Что-то не TRUE---";
                
    
*/
/*  //if-else на несколько ветвей
    int n {21};
    if (n > 22)
    {
        std::cout << "n > 22" << std::endl;
    }
    else if (n < 22)
    {
        std::cout << "n < 22" << std::endl;
    }
    else
    {
        std::cout << "n == 22" << std::endl;
    }
 */  
 /*  //if-else на несколько ветвей
 int n {21};
    if (n == 20)
    {
        std::cout << "n == 20" << std::endl;
    }
    else if(n==21)
    {
        std::cout << "n == 21" << std::endl;
    }
    else if(n==22)
    {
        std::cout << "n == 22" << std::endl;
    }
    else if(n==23)
    {
        std::cout << "n == 23" << std::endl;
    }
	*/
	//операнд1? операнд2 : операнд3
	int aa {5};
    int bb {8};
    int cc = aa > bb ? aa - bb : aa + bb;
 
    std::cout << "cc = " << cc << std::endl; 
	aa > bb ? std::cout << aa-bb : std::cout << aa+bb;
       

return 0;
}
//---------------------------------------------------------------------------
 