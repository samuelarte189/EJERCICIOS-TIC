def letradni():
    numero = input("Dime tu numero de DNI para decirte la letra ")
    intnumero = int(numero)
    listanum= {0:"T",1:"R",2:"W",3:"A",4:"G",5:"M",6:"Y",7:"F",8:"P",9:"D",10:"X",
               11:"B",12:"N",13:"J",14:"Z",15:"S",16:"Q",17:"V",18:"H",19:"L",
               20:"C",21:"K",22:"E"}
    resto = intnumero%23
    letra = listanum[resto]
 
    print("Tu letra del DNI es", letra)

letradni()

