//lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    string linea;
    ifstream fichero("ficheromio.txt");//lo que hace es buscar la ruta que yo pongo ahi,y
    if(fichero.fail()==1){
      cout<<"ERROR.no existe la ruta";//eso si no existe la ruta que hemos puesto
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
