#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream ficher("miFichero.txt");
    string mensaje;
    int salir;
    cout<<"el texto dice:";
    while(fichero.eof()!=1){
      getline(fichero,mensaje);
      if(fichero.eof()!=1){
         cout<<mensaje;
         cout<<endl
