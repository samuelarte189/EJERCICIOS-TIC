//lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    string linea;
    ifstream fichero("C:\Users\inforbach1\Desktop");//lo que hace es buscar la ruta que yo pongo ahi,y
    while(fichero.eof()==0){
    getline(fichero,linea);
    cout<<linea<<endl;
   }
   fichero.close();
   cin>>salir;
   return 0;
}
