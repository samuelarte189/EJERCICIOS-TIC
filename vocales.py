def vocales():
    palabra=raw_input("Dime una palabra")
    A=0
    E=0
    I=0
    O=0
    U=0

    for cont in range (0,len(palabra),1):
                      if palabra[cont]=="A":
                          A=A+1
                      if palabra[cont]=="a":
                          A=A+1
                      if palabra[cont]=="E":
                           E=E+1
                      if palabra[cont]=="e":
                           E=E+1
                      if palabra[cont]=="I":
                           I=I+1
                      if palabra[cont]=="i":
                           I=I+1    
                      if palabra[cont]=="O":
                           O=O+1
                      if palabra[cont]=="o":
                           O=O+1
                      if palabra[cont]=="U":
                           U=U+1
                      if palabra[cont]=="u":
                           U=U+1
    print "en la palabra",palabra,"hay",A,"a",E,"e",I,"i",O,"o",U,"u"
vocales ()
