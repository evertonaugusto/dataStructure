from collections import deque

pilha = deque()

  

def menu():
  print("\n\nBEM-VINDO A PIZZARIA DO JACA! ")
  print(""" \n\t (1) - VER CARDÁPIO 
            \n\t (2) - ENTREGAR PIZZAR
            \n\t (3) - SAIR
  """)

def cardapio():
  while True:
    print("\n\nCONHEÇA NOSSO CARDÁPIO! ")
    print("""\n\t (1) - PORTUGUESA 
             \n\t (2) - FRANGO CATUPIRY
             \n\t (3) - CALABRESA
             \n\t (4) - QUATRO QUEIJOS
             \n\t (5) - CAMARÃO
  """)
    if len(pilha) == 0:
       for i in range(4):
        opcao = int(input(f"\nESCOLHA A {i+1}º PIZZA: "))  
        
        while opcao != 1 and opcao != 2 and opcao != 3 and opcao != 4 and opcao != 5:
          print("OPÇÃO INVALIDA! ")
          opcao = int(input(f"\nESCOLHA A {i+1}º PIZZA: ")) 
          
        if opcao == 1:
          pilha.append("PORTUGUESA")
        elif opcao == 2:
          pilha.append("FRANGO CATUPIRY")
        elif opcao == 3:
          pilha.append("FRANGO CALABRESA")
        elif opcao == 4:
          pilha.append("QUATRO QUEIJOS")
        elif opcao == 5:
          pilha.append("CAMARÃO")
    else:
      print("\n\nESTAMOS AGUARDANDO O ENTREGADOR RETORNAR!")
      break
     


def removerPizza():
  print(f"\n\nPizza de {pilha[-1]} foi entregue! ")
  pilha.pop()

  
while True:
  menu()
  escolha = int(input("\n\nESCOLHA UMA OPÇÃO: "))

  if escolha == 1:
    cardapio()
  elif escolha == 2:
    removerPizza()
  elif escolha == 3:
    break
  else:
    print("\n\nOPÇÃO INVÁLIDA! ")
    continue