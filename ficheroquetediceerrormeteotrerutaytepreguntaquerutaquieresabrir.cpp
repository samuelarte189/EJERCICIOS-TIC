//lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int salir;
    string nombre;
    string linea;
    cout<<"Dime la ruta del fichero que quieres abrir crack ;)";
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());//lo que hace es buscar la ruta que yo pongo ahi,y
    if(fichero.fail()==1){
      cout<<"ERROR.esa ruta no existe";//eso si no existe la ruta que hemos puesto
      cin>>salir;
      exit(1); 
    }
    while(fichero.eof()==0){
     getline(fichero,linea);
     cout<<linea<<endl;
   }
   fichero.close();
   cin>>salir;
   return 0; 
}
