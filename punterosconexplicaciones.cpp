//print lista - escribe la direccion.
//print *lista- escribe el contenido .
//*(*lista) te va a la primera letra.
//(*(*lista)+1,2,3..)  te va a la letraque le dices.
//malloc() sirve para localizar la memoria y le digo 
//un hueco que necesito y busca en la memoria el primer
// hueco libre de ese tamano y me va a decir en que numero tiene ese hueco.
//manejo de punteros.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int salir;
    char *lista[3];
    lista[0]=(char*) malloc(8*sizeof(char));
    lista[1]=(char*) malloc(7*sizeof(char));
    lista[2]=(char*) malloc(9*sizeof(char));
    printf("\n primer rey mago:");
    scanf("%s",lista[0]);
    printf("\n segundo rey mago:");
    scanf("%s",lista[1]);
    printf("\n tercer rey mago:");
    scanf("%s",lista[2]);
    printf("\nLos tres reyes magos son:");
    printf("%s ,",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s ",lista[2]);
    
    printf("\ntoca cualquier tecla para salir");
    scanf("%i",salir);
    
}
    
