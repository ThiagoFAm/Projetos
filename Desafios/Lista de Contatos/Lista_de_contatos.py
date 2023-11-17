lista_de_contatos = {}

print('Bem vindo a sua lista de contatos!')
print('Digite: Adicionar // Pesquisar // Atualizar // Listar // Remover // Sair')

comando = 'continuar'
def funcao():
    nome = input(str("Nome: ")).strip()
    numero = input(str("Número: ")).strip()
    email = input(str("Email:")).strip()
        
    lista_de_contatos[nome.lower()] = {
            "Nome" : nome,
            "Número" : numero,
            "Email"  : email    
    }
        
while comando != "sair":
    comando = input('Digite qual função deseja realizar:').lower()
    
    if comando == "adicionar":
        funcao()
        
        print("Contato Adicionado com êxito!")
        
    elif comando == "pesquisar":
        nome = input(str("Pesquise: ")).strip()
        if nome in lista_de_contatos:
            print("Contanto encontrado, vá em exibir lista")
            print(lista_de_contatos[nome])
        else:
            print("Contato não encontrado, vá em adicionar.")
    
    elif comando == "listar":
        print(lista_de_contatos)
    
    elif comando == "remover":
        nome = input("Contato que deseja excluir: ")
        del(lista_de_contatos[nome])
        print("Contato apagado!")
    elif comando == "atualizar":
        nome = input("Contato a ser atualizado: ")
        del(lista_de_contatos[nome])
        funcao()