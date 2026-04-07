#include <stdio.h>

void Dividir_en_cifras(int *pEntrada) {
    int numero_a_dividir_en_cifras = *pEntrada;
    int nroIteracion = 0;
    while (numero_a_separar_en_cifras > 0) {
        nroIteracion = (nroIteracion * 10) + (numero_a_dividir_en_cifras % 10);
        numero_a_dividir_en_cifras = numero_a_dividir_en_cifras / 10;
    }
    *pEntrada = nroIteracion;
}

void Division_entera_entre_2(int *pEntrada) {
    *pEntrada = *pEntrada / 2;
}

void SumarCifras(int *pEntrada) {
    int numero_a_sumar_cifras = *pEntrada;
    int suma = 0;
    while (n > 0) {
        suma = suma + (numero_a_sumar_cifras % 10);
        numero_a_sumar_cifras = numero_a_sumar_cifras / 10;
    }
    *pEntrada = *pEntrada + suma;
}

void Dividir_en_cifras_(int *valor_referencia) {
    Dividir_en_cifras(valor_referencia);
    Division_entera_entre_2(valor_referencia);
    SumarCifras(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}