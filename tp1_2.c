#include <stdio.h>

double cuadradoConReturn(double num){
    return num*num;
}

void cuadradoSinReturn(double* pNum){
    *pNum *= *pNum;
}

void mostrarVar(char** var){
    
    printf("La direccion de memoria inicial de la variable definida es: %p", var);
    printf("El contenido de la variable es: %s", **var);
}

int main(){

    double numPrueba = 2.0;
    double* pNumPrueba = &numPrueba;
    char* stringPrueba = "mira mami, lo logre";

    printf("El numero al cuadrado con return es: %.2f\n\n", cuadradoConReturn(numPrueba));
    
    cuadradoSinReturn(pNumPrueba);
    
    printf("El numero al cuadrado sin return es: %.2f\n\n", numPrueba);
    
    mostrarVar(&stringPrueba);

    return 0;
}
