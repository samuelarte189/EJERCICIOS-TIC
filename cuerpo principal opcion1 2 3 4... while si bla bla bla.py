def suma(num1,num2):
    respuesta=num1+num2
    return respuesta
def resta(num1,num2):
    respuesta=num1-num2
    return respuesta
def multiplicacion(num1,num2):
    respuesta=num1*num2
    return respuesta
def division(num1,num2):
    respuesta=num1/num2
    return respuesta
def menu_operacion():
    seguir="SI"
    num1=input("dime un numero brother")
    num2=input("dime otro my friend")
    while (seguir=="SI"):     #si=variable interruptora que depende de cual sea su valor vamos a repetir el proceso o no
        print "que deseas hacer con los numeros"
        print "Opcion 1-sumarlos"
        print "Opcion 2-restarlos"
        print "Opcion 3- multiplicarlos"
        print "Opcion 4-dividirlos"
        respuesta=input()
        if (respuesta==1):
            print num1,"+",num2,"=",suma(num1,num2)
        if (respuesta==2):
            print num1,"-",num2,"=",resta(num1,num2)
        if (respuesta==3):
            print num1,"x",num2,"=",multiplicacion(num1,num2)
        if (respuesta==4):
            print num1,"/",num2,"=",division(num1,num2)
        seguir=raw_input ("quieres seguir?")
menu_operacion()
