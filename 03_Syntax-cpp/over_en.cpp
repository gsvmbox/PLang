#include <iostream>
 
int sum(int, int);
double sum(double, double);
int sum(int, int, int);
 
int main()
{
    int result1 {sum(3, 6)}; // выбирается версия int sum(int, int)
    std::cout << result1 << std::endl; // 9
 
    double result2 {sum(3.3, 6.6)}; // выбирается версия double sum(double, double)
    std::cout << result2 << std::endl; // 9.9
    
    int result3 {sum(3, 6, 2) }; // выбирается версия int sum(int, int, int)
    
    std::cout << result3 << std::endl; // 11
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}