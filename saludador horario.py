def saludadorhorario ():
   h=input("dime que hora es")
   if (h>=6 and h<14):
       print("buenos días")
   if (h>=14 and h<20):
       print ("buenas tardes")
   if ((h>=20 and h<=24)or(h>=0 and h<6)):
       print ("buenas noches")

saludadorhorario ()
