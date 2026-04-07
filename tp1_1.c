#include <stdio.h>

int main(){
    printf("(ya estoy HARTA de escrubir tantos) hola mundo\n");
    
    double n = 2048*2048;
    double* pN = &n;
    printf("Contenido de puntero: %p \n", *pN);
    printf("Contenido de la variable: %p \n", pN);
    printf("Direccion de memoria de la variable: %p \n", &n);
    printf("Direccion de memoria del puntero pN apuntado a n (SUPUESTAMENTE): %p \n", &pN); //AYUDA, ESTI DEBERUA SER DISTINTO A LAS DOS DE ARRIBA PERO ES IGUAL AAAAAAAAAAAAAAAAAAAAAA    
    printf("El tamaño de memoria utilizado es: %d bytes", sizeof(n)); 
    return 0;
}