#include <iostream>
#include <math.h>
#include <limits>

int entradaEntero();
int cualNumeroEsMayor(int num1, int num2);

int main(){

}

int entradaEntero(){
    int num;
    while (true)
    {
        std::cout<<"Ingresa un numero entero"<<std::endl;
        std::cin>>num;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout<<"Numero invalido. Introduce un numero valido. \n";
        }else{
            return num;
        }        
    }    
}
int cualNumeroEsMayor(int num1, int num2){
    if(num1 == num2){
        std::cout<<"Son iguales";
        return 0; 
    }else if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
