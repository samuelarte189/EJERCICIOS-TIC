//programas sobre manejo de memoria
#include<stdio.h>//en stdio el using namespace  no existe lo hace para reservar memoria
int main(){
    char palabra1[5];       //char guarda un byte que son 8 bits para poner +, es 0, ej(012) y - es 1 ej 112 //float para guardar numeros decimales
    char palabra2[5];
    printf("Dime algo");
    scanf("%s",palabra1);    //%s para guardar una palabra, %c para guardar una letra
    printf("\dime algo mas");
    scanf("%s",palabra2);
    int salir;
    printf("Direccion de palabra1 = %x",palabra1);
    printf("palabra1=%c\n",*(palabra1+3)); //  \n es para saltar linea
    printf("direccion de palabra2 = %x",palabra2); //le dices a la palabra el contenido de la memoria
    printf("palabra2=%c",*(palabra2+4));
    scanf("%i",&salir);
}
//string lista[3] guarda 3 nombres
