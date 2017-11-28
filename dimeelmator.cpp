/*Este program leera 10 numeros enteros y nos dira 
el mayor*/
#include<iostream>

int main(){
    //definicion de variables
    int cont;
    int numero;
    int mayor;
    int salir;
    //bucle tipo for
    mayor=0;
    for(cont=1;cont<=10;cont++){
          std::cout<<"dime un numero entero:";
          std::cin>>numero;
          if(numero>mayor){
            mayor=numero;
            }
    }
          
    std::cout<<"el mayor es"<<mayor;
    std::cout<<"toca cualquier tecla y dale a enter";
    std::cin>>salir;
    return 0;
    
    
    
    
      }
