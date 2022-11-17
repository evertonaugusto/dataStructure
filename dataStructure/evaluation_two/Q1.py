listaL = []
listaK = []

def inserir():
  valor = int(input("Digite um valor inteiro: "))
  listaL.append(valor)

def ordenacao():
  while True:
    for i in range(len(listaL)):
      for j in listaL:
        listaK.append(j)
        listaL.remove(j)

    listaK.sort()
    
    if listaL is not None:
      print("\nLista ordenada com sucesso! ")
      break
        
  
for i in range(3):
  inserir()

print(listaL)
print(listaK)

ordenacao()
print(listaL)
print(listaK)
