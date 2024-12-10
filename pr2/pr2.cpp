#include <iostream>
#include <math.h>
#include <limits>

int entradaEntero();
int cualNumeroEsMayor(int num1, int num2);
void tiposDeumeros(int num);
void vocales(char letra);

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
void tiposDeumeros(int num){
    if(num == 0){
        std::cout<<"El numero "<<num<<"es NEUTRO";
    }else if(num > 0){
        std::cout<<"El numero "<<num<<"es POSITIVO";
    }else if(num < 0){
        std::cout<<"El numero "<<num<<"es NEGATIVO";
    }
}
void vocales(char letra){
    if (letra == 'a' || letra == 'A'){
        std::cout<<letra<<" Es vocal";
    }else if(leta == 'e' || letra == 'E'){
        std::cout<<letra<<" Es vocal";
    }else if(letra == 'i' || letra == 'I'){
        std::cout<<letra<<" Es vocal";
    }else if(letra == 'o' || letra == 'O'){
        std::cout<<letra<<" Es vocal";
    }else if(letra == 'u' || letra == 'U'){
        std::cout<<letra<<" Es vocal";
    }else{
        std::cout<<"La letra no es vocal";
    }
}