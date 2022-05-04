#include <stdio.h>
#include "converte.h"

int main(void){
    int opcao;
    float temperatura;

    do{
        printf("Selecione a escala termométrica base:\n");
        printf("1.Celsius\n2.Fahrenheit\n3.Kelvin\n0.SAIR\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Informe a temperatura:\n");
                scanf("%f", &temperatura);
                celsius(temperatura);
                break;
            case 2:
                printf("Informe a temperatura:\n");
                scanf("%f", &temperatura);
                fahrenheit(temperatura);
                break;
            case 3:
                printf("Informe a temperatura:\n");
                scanf("%f", &temperatura);
                kelvin(temperatura);
                break;
        }
    }while(opcao != 0);
}
