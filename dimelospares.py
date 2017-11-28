def dimelospares():
    numero=input("Dime un numero")
    suma=0
    resto=0
    while numero>0:
        resto=numero%10
        if resto%2==0:
            suma=suma+1
        numero=numero/10
    print "hay",suma,"numeros pares"
dimelospares()
