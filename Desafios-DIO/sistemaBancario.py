"""
d - Depósito
e - Extrato
s - Saque
q - sair
"""

saldo = 0
limite = 500
extrato = ""
numeroSaques = 0
limiteSaques = 3

while True:
    op = input("Operação desejada: ")
    
    if op == "d":
        print("depósito")
        valorDeposito = int(input("Digite o valor: "))
        if valorDeposito < 0:
            print("Não é possivel depositar, valores negativos não são processados")
        else:
            saldo += valorDeposito
            extrato += f"Deposito - R${valorDeposito}\n"
            print("Operação realizada com êxito!")
    elif op == "s":
        print("Saque")
        valorSaque = int(input("Digite o valor: "))
        if numeroSaques >= limiteSaques:
            print("Não é possivel sacar, número de saques excedido!")
        elif saldo == 0:
            print("Não é possivel sacar, conta sem saldo")
        elif valorSaque > limite:
            print("Não é possivel sacar, valor limite excedido!")
        else:
            numeroSaques += 1
            saldo -= valorSaque
            extrato += f"Saque - R${valorSaque}\n"
            print("Operação finalizada com êxito!")
            
    elif op == "e":
        print("Extratos")
        print(extrato)
        
    elif op == "q":
        print("Volte sempre!")
        break
    else: 
        print("ERROR - Operação inválida")
        
            
            
        
        
        
        
        
            