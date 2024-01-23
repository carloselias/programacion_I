#include <iostream>
int n1,n2,resultado;
void suma();
void resta();
void multiplicacion();
void division();
int main()
{
    suma();
    resta();
    multiplicacion();
    division();
}
void suma()
{
    std::cout<<"Suma"<<std::endl<<"ingrese el primer numero > ";
    std::cin>>n1;
    std::cout<<"ingrese el segundo numero > ";
    std::cin>>n2;
    std::cout<<"suma > "<<n1+n2<<std::endl;
}
void resta()
{
    std::cout<<std::endl<<"Resta"<<std::endl<<"ingrese el primer numero > ";
    std::cin>>n1;
    std::cout<<"ingrese el segundo numero > ";
    std::cin>>n2;
    std::cout<<"resta > "<<n1-n2<<std::endl;
}
void multiplicacion()
{
    std::cout<<std::endl<<"Multiplicacion"<<std::endl<<"ingrese el primer numero > ";
    std::cin>>n1;
    std::cout<<"ingrese el segundo numero > ";
    std::cin>>n2;
    std::cout<<"multiplicacion > "<<n1*n2<<std::endl;
}
void division()
{
    std::cout<<std::endl<<"Divison "<<std::endl<<"dividiendo > ";
    std::cin>>n1;
    std::cout<<"divisor > ";
    std::cin>>n2;
    std::cout<<"division > "<<n1/n2<<std::endl;
}