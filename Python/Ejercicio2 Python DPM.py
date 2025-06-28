#Por: Diego Paniagua Molina 
#05/10/2020

#Inicio
#Definimos la variable numPrimo y la variable num (que es ingresada por teclado)
numPrimo = 0 
num = int (input("Ingrese un numero mayor a 1 :")) 
#Solo podemos ingresar numeros mayores a 1
if (num<1): 
  print ("No se pueden ingresar numeros menores que 1")
#Definimos el ciclo
while (num>1 and num!=0): 
  #Si num es primo se continua con el ciclo
  primo=True  
  #Si num es igual a 0 el ciclo se terminara
  for i in range(2,num): 
    if (num==0):
      primo=False 
      break 
  #Si num es primo se acumulara en la variable numPrimo
  if (primo): 
      numPrimo = numPrimo + 1 
  num = int (input("Ingrese un numero mayor a 1 :")) 
#Mostrar la cantidad de numeros primos ingresados
print("Numeros primos >>> " + str(numPrimo)) 
#Fin