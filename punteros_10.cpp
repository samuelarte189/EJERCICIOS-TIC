#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++; 
    }
    
    return l;
    }
    
int main(){
    
    int salir;
    int l;
    char*lista[5];
    int cont;
    int main;
    char *pauxiliar;
    char aux[15];//aux es el sitio donde guardas todo por teclado
    for(cont=0;cont<5;cont++){
        printf("\n Nombre de amigo %i",cont);
        scanf("%s",aux);
        l=medida(aux);
        printf("%i",l);
        lista[cont]=(char *)malloc(l*sizeof(char));
        strcpy(lista[cont],aux);//sirve para coger letra a letra una palabra encontrada en una posicion de memoria,para ponerla a otra
         }
         
    for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);    
    }
        //ordenamiento
   for(nveces=1;nveces<5;nveces++){
    for(cont=0;cont<4;cont++){
      if(*lista[cont]>*lista[cont+1]){
               pauxiliar=lista[cont];
               lista[cont]=lista[cont+1];
               lista[cont+1]=pauxiliar;
      }        
                             
    }
        //depsues del ordenamiento
    for(cont=0;cont<5;cont++){
            printf("\n%s",lista[cont]); 
    }
        printf("\nTOCA CUALQUIER TECLA PARA SALIR");
        scanf("%i",&salir);       
}
