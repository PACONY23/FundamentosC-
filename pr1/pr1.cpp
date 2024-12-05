#include<iostream>
#include<limits>
#include<math.h>

double entrada();
short entradaShort();
int entradaInt();
double porcentajes(double num1, double num2);
double potencias(double num1, double num2);
double potenciasPow(double num1, double num2);
double divisiones(double num1, double num2);
short radiantes(short num1, short num2);
int invercionDeDigitos5(int num1);
int contadorDigitos(int num1);


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

short entradaShort(){
    short num;
    while(true){
        std::cout<<"Ingrese un numero"<<std::endl;
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

int entradaInt(){
    int num;
    while (true){
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

double potenciasPow(double num1, double num2){
    return pow(num1, num2);
}

double divisiones(double num1, double num2){
    while (num2 == 0){
        std::cout<<"No se puede dividir entre 0"<<std::endl;
        std::cout<<"Dame un numero mayor a 0"<<std::endl;
        num2 = entrada();
    }
    return num1/num2;
}

short radiantes(short num1, short num2){//Funciona con short
    while (num1 <= 0 || num2 <= 0){
        std::cout<<"Ambos numeros deben ser enteros positivos"<<std::endl;
        num1 = entradaShort();
        num2 = entradaShort();
    }
    double resultado = pow(static_cast<double>(num1), 1.0 / static_cast<double>(num2));

    
    if (resultado > std::numeric_limits<short>::max() || resultado < std::numeric_limits<short>::min()) {
        std::cout << "El resultado está fuera del rango de short.\n";
        return 0; 
    }

    return static_cast<short>(resultado); 
}

int invercionDeDigitos5(int num1){
    int numInvertido;
    while(num1 != 0){
        int digito = num1 % 10;
        numInvertido = numInvertido * 10 + digito;
        num1/=10;
    }
    return numInvertido;
}

int contadorDigitos(int num1){
    num1 = std::abs(num1);
    int digitos;

    do{
        num1/=10;
        digitos++;
    }while(num1 != 0);

    return digitos;
}

