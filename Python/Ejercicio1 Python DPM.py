#Por: Diego Paniagua Molina

#Inicio 
#Definir numero a adivinar y demas variables
numAdivinar = 13 
numIntentos = 0 
sumaNum = 0 
#Seleccionar si eres el primero, segundo o tercer jugador
numUsuario = int (input("Escribe tu numero de jugador (1ero, 2do, 3ero) :")) 
# No se pueden ingresar numeros menores a 1 ni mayores a 10 
if (numUsuario>3 or numUsuario<0): 
  print("No puedes seleccionar numeros mayores a 20 ni menores a 0")  
#Comienzo del juego 
print("Comienza el juego, debes adivinar el numero secreto en la menor cantidad de intentos posibles") 
#Condicion del ciclo
while (numUsuario<20 and numUsuario>0): 
  numUsuario = int (input("Escribe un numero entero entre el 1 y el 20 :")) 
  sumaNum = sumaNum + numUsuario 
  numIntentos = numIntentos + 1
  #Si se adivina 
  if (numUsuario == numAdivinar): 
    print("¡Lo adivinaste!") 
    break 
  elif (numUsuario>20):
    print("No se puede ingresar un numero mayor a 20")
    break
  elif (numUsuario<1):
    print("No se puede ingresar un numero menor a 1") 
    break
  #Si la suma es mayor a 85
  elif (sumaNum > 85): 
    print("Se alcanzo el numero de intentos maximo para adivinar")
    break 
  #Pistas para el usuario  
  else:  
    print("Aqui van algunas pistas")
    if (numUsuario<13 and numUsuario>6): 
      print("Caliente, su numero es cercano al que debe adivinar") 
    elif (numUsuario< 6 and numUsuario>0): 
      print("Muy frio, no esta nada cerca de adivinar el numero") 
    elif (numUsuario>13 and numUsuario<17): 
      print("Caliente, su numero es cercano al que debe adivinar")
    elif (numUsuario>17 and numUsuario<20): 
      print("Muy frio, no esta nada cerca de adivinar el numero") 
    else:
      print("Error") 
      break   
#Mostrar intentos realizados     
print("Total de intentos realizados >>> " + str(numIntentos))
#Fin