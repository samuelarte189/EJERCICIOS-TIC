//AGENDA DE CONTACTOS
#include<iostream>
using namespace std;
int main(){
    struct persona{
       string nombre;
       string apellido; 
       int numerodetelefono;
       string direccion;
    };
    persona amigo[30];
    int cont;
    int salir;
    
    while(cont<30){cout<<"\nAgenda de amigos"<<cont<<endl;
      cout<<"Cual es el nombre de tu amigo?:";
      cin>>amigo[cont].nombre;
      cout<<"cual es su apellido?";
      cin>>amigo[cont].apellido;
      cout<<"cual es su numero de tfno?";
      cin>>amigo[cont].numerodetelefono;
      cout<<"cual es su direccion?:";
      cin>>amigo[cont].direccion;
      };
    cout<<"los datos sobre tus amigos ya estan guardados";
    cout<<"\n toca cualquier tecla para poder salir";
    cin>>salir;
    return 0;
     }
    

