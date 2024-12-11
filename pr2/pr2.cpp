#include <iostream>
#include <math.h>
#include <limits>

int entradaEntero();
int cualNumeroEsMayor(int num1, int num2);
void tiposDeumeros(int num);
void vocales(char letra);
void multiplo3Y5(int num);
void parImpar(int num);
int cualNumeroMayor3(int num1, int num2, int num3);
int dobleOTriple(int num1);
void ordenABS(int num1, int num2, int num3);
double descuento(double num);

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
    }else if(letra == 'e' || letra == 'E'){
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
void multiplo3Y5(int num){
    if (num % 3 == 0){
        std::cout<<"Es multiplo de 3"<<std::endl;
    }else{
        std::cout<<"No es multiplo de 3"<<std::endl;
    }
    if(num % 5 == 0){
        std::cout<<"Es multiplo de 5"<<std::endl;
    }else{
        std::cout<<"No es multiplo de 5"<<std::endl;
    }
}
void parImpar(int num){
    if(num % 2 == 0){
        std::cout<<"El numero es para"<<std::endl;
    }else{
        std::cout<<"El numero es impar"<<std::endl;
    }
}
int cualNumeroMayor3(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return num1;
    }else if(num2 > num1 && num2 > num3){
        return num2;
    }else{
        return num3;
    }
}
int dobleOTriple(int num1){
    if(num1 % 2 == 0){
        return pow(num1, 2);
    }else{
        return pow(num1, 3);
    }
}
void ordenABS(int num1, int num2, int num3){
    int mayor, menor, intermedio;
    if(num1 > num2 && num1 > num3){
        mayor = num1;
    }else if(num2 > num1 && num2 > num3){
        mayor = num2;
    }else{
        mayor = num3;
    }
    if(num1 < num2 && num1 < num3){
        menor = num1;
    }else if(num2 < num1 && num2 < num3){
        menor = num2;
    }else{
        menor = num3;
    }
    intermedio = (num1 + num2 + num3) - (mayor + menor);
    std::cout<<"Mayor: "<<mayor<<std::endl;
    std::cout<<"Intermedio: "<<intermedio<<std::endl;
    std::cout<<"Menor: "<<menor<<std::endl;
}
double descuento(double num){
    double descuento, iva;
    if (num < 100){
        descuento = num * 0.10;
        iva = descuento * 0.19;
        num = (num - descuento) + iva;
    }else if(num > 100){
        descuento = num * 0.20;
        iva = descuento * 0.19;
        num = (num - descuento) + iva;
    }
    return num;
}