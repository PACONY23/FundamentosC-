#include<iostream>
#include<limits>
#include<math.h>

double entrada();
double porcentajes(double num1, double num2);
double potencias(double num1, double num2);

int main(){
    std::cout<<"En este programa se veran diferentes problemas de logica basica"<<std::endl;
    std::cout<<"Limite de programas 20"<<std::endl;

    return 0;
}

double entrada(){
    double num;
    while(true){
        std::cout<<"Itroduce un numero";
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

double porcentajes(double num1, double num2){ //num2 es el porcentaje
    double porcentaje = num2/100;
    double resultado = num2*porcentaje;
    return resultado;
}

double potencias(double num1, double num2){
    double resultado = num1;
    for(int i = 0; i < num2-1 ; i++){
        resultado = resultado*num2;
    }
    return resultado; 
}

