def mayor(num1,num2):
    if(num1>num2):
        respuesta=num1
    else:
        respuesta=num2
    return respuesta
def comparadorprincipal():
    num1=input("dime un numero")
    num2=input("dime otro numero")
    print mayor(num1,num2)
comparadorprincipal()
