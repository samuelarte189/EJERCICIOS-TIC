def suma_cifras():
    numero=input("Dime un numero")
    decenas=numero/10         #es la decena 
    unidades=numero%10              #es el resto
    print"la suma de las cifras de",numero,"vale",decenas+unidades

suma_cifras()
