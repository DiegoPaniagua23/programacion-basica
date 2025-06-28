#Por: Diego Paniagua Molina

#Secuencia de N numeros
N = 0 
numeros = 0 
sumaT = 0 
#Ingresar el total de numeros
N = int(input("Ingrese total de numeros :")) 
#Agregamos un ciclo FOR 
for n in range(N): 
  #Los numeros deben ser mayores a 0 y menores o iguales que 10
  if (N>0 and N<=10): 
    #Ingresar numeros que se sumaran
    numeros = int(input("Ingrese numeros a sumar :")) 
    sumaT = sumaT + numeros 
    #Mostrar si los numeros son son mayores o iguales a 5
    if (numeros >= 5):
       print("Es un numero mayor o igual que 5 :" + str(numeros)) 
    #Mostrar si no los hay
    else: 
       print("No es mayor o iguales que 5") 
  #Los numeros no pueden ser negativos
  else: 
    print("Los numeros NO pueden ser negativos ni > 10") 
#Mostrar suma
print("La suma es :" + str(sumaT)) 