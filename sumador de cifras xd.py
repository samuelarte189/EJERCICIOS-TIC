def suma_cifras():
    numero=input("Dime un numero")
    suma=0
    while numero>10:
        suma=suma+numero%10 #cojo el resto
        numero=numero/10    #cojo el numero que queda
    print suma+numero       #porque asi coge el ultimo numero de todos ej de 4355 coge el 4

suma_cifras()
        
