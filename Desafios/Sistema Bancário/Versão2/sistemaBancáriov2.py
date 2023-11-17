"""
    1 -> DEPOSITO
    2 -> SAQUE
    3 -> EXTRATO
    4 -> LISTAR CONTAS
    5 -> CRIAR USUARIO
    6 -> CRIAR CONTA
    0 -> SAIR
"""
def menu():
    while True:
        op = int(input("Digite a operação: "))
        if 0 <= op <= 6:  # Corrigindo a verificação das opções
            return op
        else:
            print("ERROR - OPÇÃO NÃO ENCONTRADA")


def deposito(saldo, valor, extrato):
    text = "DEPOSITO"
    print(text.center(20, "="), end="\n\n")

    if valor < 0:
        print("\nERRO - Valor negativo!\n")
    else:
        saldo += valor
        extrato += f"Deposito - R${valor}\n"
        print("\nOK - Operação realizada!\n")

    return saldo, extrato


def saque(saldo, valor, extrato, numeroSaques, LIMITE, LIMITESAQUES):
    text = "SAQUE"
    print(text.center(20, "="), end="\n\n")

    if numeroSaques >= LIMITESAQUES:
        print("\nERRO -  limite de SAQUES EXCEDIDO !\n")
    elif saldo == 0:
        print("\nERRO - Conta SEM SALDO!\n")
    elif valor > LIMITE:
        print("\nERRO - Valor do SAQUE SUPERA LIMITE!\n")
    else:
        numeroSaques += 1
        saldo -= valor
        extrato += f"Saque - R${valor}\n"
        print("\OK - Operação realizada!\n")

    return saldo, extrato


def ver_extrato(saldo, extrato):  # Renomeando a função para evitar conflito com o nome do módulo
    print(f"Saldo Atual - R$ {saldo}\n\n")
    print(extrato)


def criar_usuario(usuarios):
    cpf = int(input("CPF(Somente numero): "))
    filtro = pesquisar(cpf, usuarios)

    if filtro:
        print("ERROR - CPF EM USO!")
        return

    nome = input("Nome:")
    data_deNasimento = input("Data de nascimento(Ex: dd/mes/ano): ")
    endereco = input("Endereço (logradouro - bairro - cidade - Estado): ")

    usuario = {"Nome": nome, "Nascimento": data_deNasimento, "CPF": cpf, "Endereço": endereco}
    usuarios.append(usuario)
    print("OK - Usuário criado com sucesso!")


def listar_contas(contas):
    for conta in contas:
        print(f"{conta}\n")


def pesquisar(cpf, usuarios):
    filtro = [usuario for usuario in usuarios if usuario["CPF"] == cpf]
    return filtro[0] if filtro else None


def criar_conta(AGENCIA, numeroConta, usuarios, contas):
    cpf = int(input("CPF (Somente numeros):"))
    usuario = pesquisar(cpf, usuarios)
    if usuario:
        print("OK - Conta Criada com SUCESSO")
        conta = {"agencia": AGENCIA, "Numero da conta": numeroConta, "usuario": usuario}
        contas.append(conta)
    else:
        print("ERROR - CPF não encontrado. Não é possível criar a conta.")


def main():
    LIMITESAQUES = 3
    LIMITE = 500
    AGENCIA = "0001"

    usuarios = []
    contas = []

    saldo = 0
    extrato = ""
    numeroSaques = 0

    while True:
        op = menu()

        if op == 1:
            valor = int(input("Digite o valor: "))
            saldo, extrato = deposito(saldo, valor, extrato)

        elif op == 2:
            valor = int(input("Digite o valor: "))
            saldo, extrato = saque(saldo, valor, extrato, numeroSaques, LIMITE, LIMITESAQUES)

        elif op == 3:
            ver_extrato(saldo, extrato)

        elif op == 4:
            listar_contas(contas)

        elif op == 5:
            criar_usuario(usuarios)

        elif op == 6:
            numeroConta = len(contas) + 1
            criar_conta(AGENCIA, numeroConta, usuarios, contas)

        elif op == 0:
            print("Volte sempre!")
            break
        else:
            print("ERROR - Operação inválida")


main()
