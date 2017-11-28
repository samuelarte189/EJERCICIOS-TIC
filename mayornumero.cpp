//vamos a aprender a hacer arrays
//ready? let´s go
//alguien me sigue?????????
using namespace std;

#include<iostream>
 int main(){
     int pepito[5];
     int cont;
     int salir;
     int suma=0;
     for(cont=0;cont<5;cont++){
        cout<<"dime un numero tronco:";
        cin>>pepito[cont];                       
        }
        cout<<"mira mi bonito vector relleno:"<<endl;
        for(cont=0;cont<5;cont++){
           cout<<"pepito["<<cont<<"]="<<pepito[cont]<<endl;   
}
//ahora sumamos
        cout<<"la suma vale:"<<endl;
        for (cont=0;cont<5;cont++){
            suma=suma+pepito[cont];
}
            
            
            
            
        cout<<"toca cualquier tecla machote:";
        cin>>salir;
        return 0;
     
