#include<iostream>
#inlude<fstream>//para ficheros
//un bucle con una variable interruptora es aquel que te pregunta si quieres seguir y si quieres repite y sino no
using namespace std;
//stream es una cadena de letras
//char es para meter una letra
//string es una palabra
//float era para numeros decimales
//int para numeros cortos
int main(){
    char respuesta='s';
    string nombre;
    string numero;
    ofstream agenda("ficheroAgenda.txt");
    while(respuesta's'){
      cout<<"nombre:";
      cin>>nombre;
      cout<<"numero";
      cin>>numero;
      agenda<<nombre<<","<<numero<<endl;
      
      cout<<"deseas introducir otro amigo?? s/n:";
      cin>>respuesta;
      
    }
    agenda.close();
    return 0;
