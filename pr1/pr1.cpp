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
int sumaDeNumerosDeN(int num1);
double areaCirculo(double radio);
void SegundosADatos(int segundos);
int numerosParesDeDos(int num1, int num2);
int metrosADatos(int milimetros);
void cuantosEnterosPares(int num1, int num2);
int contadorDeEnterosPares(int num);
void solucionDeFormulas(double num1, double num2);
double primerFormula(double num1, double num2);
double segundaFormula(double num1, double num2, double num3);

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

int sumaDeNumerosDeN(int num1){
    return (num1*(num1+1))/2;
}

double areaCirculo(double radio){
    return pow(radio,2)*(3.1416);
}

void SegundosADatos(int segundos){
    const int hora = 3600;
    const int minutos = 60;

    std::cout<<"Segundos: "<<segundos<<std::endl;
    std::cout<<"Minutos: "<<segundos/minutos<<std::endl;
    std::cout<<"Horas: "<<segundos/hora<<std::endl;
}

int numerosParesDeDos(int num1, int num2){
    int contador=0;
    if(num1%2 == 0){
        contador+=1;
    }
    if(num2%2 == 0){
        contador+=1;
    }
    return contador;
}

int metrosADatos(int num){
    const int metro = 100;
    const int decimetros = 10;
    const int centimetros = 100;
    const int milimetros = 1000;

    std::cout<<"Metros: "<<num/metro;
}

void cuantosEnterosPares(int num1, int num2){
    std::cout<<"Numero1 enteros: "<<contadorDeEnterosPares(num1)<<std::endl;
    std::cout<<"Numero2 enteros: "<<contadorDeEnterosPares(num2)<<std::endl;
}

int contadorDeEnterosPares(int num){
    int contador = 0;
    if (num < 10){
        if(num % 2 == 0){
            contador++;
        }
    }else{
        while (num > 0){
            int digito = num % 10;
            num = num / 10;
            if(digito % 2 == 0){
                contador++;
            }
        }
    }
    return contador;
}

void solucionDeFormulas(double num1, double num2){
    std::cout<<"Respuesta de la primer formula: "<<primerFormula(num1, num2)<<std::endl;
    std::cout<<"Respuesta de la segunda formula: "<<segundaFormula(num1, num2, primerFormula(num1, num2))<<std::endl;
}
double primerFormula(double num1, double num2){
    return ((4*(pow(num1, 4))+(3*num2*num1)+(pow(num2, 2)))/(pow(num1, 2)-(pow(num2, 2))));
}
double segundaFormula(double num1, double num2, double num3){
    return ((3*(pow(num3, 2)))+(num1)+(num2))/(4);
}