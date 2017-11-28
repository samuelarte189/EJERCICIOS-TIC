def cambiadordevocales():
    texto=raw_input("Escribe un texto entero")
    for cont in range(0,len(texto),1):
        if texto[cont]=='A' or texto[cont]=='a' or texto[cont]=='E' or texto[cont]=='e' or texto[cont]=='I' or texto[cont]=='i' or texto[cont]=='O' or texto[cont]=='o' or texto[cont]=='U' or texto[cont]=='u':
            print 'u',
        else:
           print texto[cont],
cambiadordevocales()
