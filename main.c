#include <stdio.h>

int main() {
    
    return 0;
}

void ejercicio_powerpoint_7(){
    // en este caso, tambien copie directamente desde el powerpoint, pero porque no sabia como es la estructura del switch en c
    // de paso, lo cambie para que se puedan realizar las operaciones hechas anteriormente
    int option;

    do{
        printf("\nMenu: \n");
        printf("1 - Ingresar nombre y edad \n");
        printf("2 - Encontrar maximo de un array \n");
        printf("3 - Encontrar minimo de un array \n");
        printf("4 - Encontrar promedio de un array \n");
        printf("5 - Listar simbolos en ASCII \n");
        printf("6 - Definir si un numero es par o impar \n");
        printf("7 - Salir \n");
        scanf("%d", &option);
        switch(option){
            case 1:
                ejercicio_powerpoint_1();
                break;
            case 2:
                ejercicio_powerpoint_2();
                break;
            case 3:
                ejercicio_powerpoint_3();
                break;
            case 4:
                ejercicio_powerpoint_4();
                break;
            case 5:
                ejercicio_powerpoint_5();
                break;
            case 6:
                ejercicio_powerpoint_6();
                break;
            case 7:
                break;
            default:
                printf("Opcion invalida");
        }
    } while(option != 7);
}

void ejercicio_powerpoint_1(){
    char name[100];
    int age;
    
    printf("Ingrese su nombre: ");
    scanf("%s", name);    
    printf("Ingrese su edad: ");
    scanf("%d", &age);
    
    printf("Su nombre es %s, de %d años de edad", name, age);
}

void ejercicio_powerpoint_2(){
    int num[] = {1,3,846,54,2,87,9,21,324,6};
    int max = 0;
    int i;
    
    for(i = 0; i < sizeof(num)/sizeof(num[0]); i++){
        if (num[i]>max){
            max = num[i];
        }
    }

    printf("El numero maximo es %d", max);
}

void ejercicio_powerpoint_3(){
    int num[] = {1,3,846,54,2,87,9,21,324,6};
    int min = 1000;
    int i;
    
    for(i = 0; i < sizeof(num)/sizeof(num[0]); i++){
        if (num[i] < min){
            min = num[i];
        }
    }

    printf("El numero minimo es %d", min);
}

void ejercicio_powerpoint_4(){
    int num[] = {1,3,846,54,2,87,9,21,324,6};
    int avg = 0;
    int size = sizeof(num)/sizeof(num[0]);
    int i;

    for(i = 0; i < size; i++){
        avg = avg + num[i];
    }

    avg = avg / size;

    printf("El promedio es de %d", avg);
}

void ejercicio_powerpoint_5(){
    // este lo copie directamente del powerpoint, no tenia la menor idea de que se podia hacer algo asi
    for (int i = 0; i < 128; i++) {
        printf("%03d---%c \n", i, i);
    }
}

void ejercicio_powerpoint_6(){
    int x;
    printf("Ingrese numero: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("El numero %d es par", x);
    } else {
        printf("El numero %d es impar", x);
    }
}