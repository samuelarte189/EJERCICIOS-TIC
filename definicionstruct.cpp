
#include<iostream>
using namespace std;
int main(){
    //declaro un nuevo tipo de dato
    struct persona{
       string nombre; //una palabra
       int edad; //te da un numero
       char colorpelo; //R rubio, P pelirrojo etc - te da una letra
    };
    //declaro una variable de tipo persona
    
    persona amigo[3];
    int cont;
    int salir;
    for(cont=0;cont<3;cont++){
      cout<<"DATOS AMIGO"<<cont<<endl;//para que lo pregunte 3 veces
      cout<<"Como se llama tu amigo?:";
      cin>>amigo[cont].nombre;
      cout<<"que edad tiene?:";
      cin>>amigo[cont].edad;
      cout<<"de que color tiene el pelo?:";
      cin>>amigo[cont].colorpelo;
    }
    cout<<"toca cualquier tecla para salir";
    cin>>salir;
    return 0;
     }
    
