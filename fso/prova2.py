def questao1():
	question = "Nos sistemas com paginação, a rotina para tratamento de page faults está residente na memória principal.\nEsta rotina pode ser removida da memória em algum momento?\nO que aconteceria se esta rotina não estivesse na memória principal durante a ocorrência de um page fault?"

	answer = "A rotina não pode ser retirada da memória, pelo motivo de que caso ocorra um page fault não terá nenhuma rotina que tratará, pois ela mesmo não se encontra em memória. Fazendo com acabe ocorrendo um erro com o programa."

	t = (question, answer)
	
	return t

def questao2():
	question = "Um certo computador oferece a seus usuários um espaço de memória virtual de 2³² bytes. O computador tem 2^18 bytes de memória física. A memória virutal é implementada por paginação e o tamanho da página é de 4096 bytes. Um processo de usuário gera o endereço virtual 11123456. Explique como o sistema estabelece a correspondente posição física. Faça distinção entre operações de software e de hardware."

	answer = "A página é composta por bits de endereçamento que são os menos significatos e os mais significativos que são os que indicam o índice da posição na tabela de páginas na memória virtual. Quando analisado esses bits na posição correta, é visto se o bit de validade é verdadeiro ou falso. Caso seja verdadeiro, 1, o valor daquele endereço de página (bits) siginifica os bits mais siginificativos do endereço na memória principal. Assim, é dado um 'append' desses bits com os bits de deslocamento, do conjunto anterior. Esses bits são os mais significativos na união. Esse processo é feito via hardware,elemento chamado MMU, que é a unidade de gerenciamento de memória que pega esse valor que foi encontrado e o leva para o barramento/memória principal."

	t = (question, answer)

	return t

def questao3():
	question = "Você imaginou um novo algoritmo de substituição de página que você acha que possa ser ótimo. Em alguns casos de testes distorcidos ocorreu anomlia de Belady. O novo algoritmo é ótimo? Explique a sua resposta."

	answer = "O algoritmo não será considerado ótimo pelo fato de que a anomalia se dá quando aumentado o número de páginas, a quantidade de page fault aumente em algum caso. Para que seja considerado um algoritmo ótimo, enquanto aumentasse a quantidade de páginas, o valor de page fault diminuiria até ficar constante."

	t = (question, answer)

	return t

def questao4():
	question = "Para que serve o bit de validade nas tabelas de páginas?"

	answer = "O bit de validade serve para saber se a página encontra-se mapeada na memória principal ou não."

	t = (question, answer)

	return t

def questao5():
	question = "A alocação contígua de arquivos leva a uma fragmentação do disco, explique como essa fragmentação ocorre. Essa fragmentação é interna ou externa? Faça uma analogia com a gerência de memória."

	answer = "A alocação contígua de arquivos separa a memória em blocos, que são espaços de memória pré-alocados. Sendo assim, um arquivo ocupará o seu tamanho dentro desse bloco alocado, então, em determinado momento que o bloco estiver perto da sua capacidade pré-alocada, sobrará um restante de memória no bloco, caso esse restante não tenha capacidade para alocar um outro arquivo, esse espaço será inutilizado. Sendo então uma fragmentação externa. A alocação contígua de arquivos funciona basicamente igual à gerência de memória. Ou seja, são separados blocos de memória que serão separados por sub-blocos de tamanho fixo ou variável."

	t = (question, answer)

	return t

def questao6():
	question = "É possível criar um link simbólico para um arquivo que não existe? E um hard link? Justifique sua resposta."

	answer = "Existe a possibilidade de criar um link simbólico para um arquivo inexistente, porém acarretará um erro ao tentar acessá-lo ou executá-lo pois está referenciado algo que não existe na memória e nem é um arquivo existente. Porém, caso você o abra com o Vim, por exemplo, ele criará esse arquivo inicialmente em branco. Já o hard link não é possível, pois ele funciona como uma 'cópia' do arquivo."

	t = (question, answer)

	return t

def questao7():
	question = "A figura (a) apresenta dois arquivos na forma de uma lista ligada de blocos em disco. A figura (b) apresenta estes mesmos arquivos em uma tabela de alocação em memória (tipo FAT - File Allocation Table). A figura (c) é um exemplo de i-node.\n\nA) Compare e explique as vantagens e desvantagens de se utilizar o armazenamento dos arquivos por lista ligada e por tabela de alocação em memória.\n\nB) Comente vantagens da utilização de i-nodes, como o representado na figura abaixo, sobre o uso das tabelas em memória.\n"

	answer = "A) as vantagens da utilização da lista encadeada dá pelo fato que evita a fragmentação externa, um novo arquivo pode ser colocado no espaço vazio. Fácil de implementar e arquivos podem alterar seu tamanho sem grande custo. Já as suas desvatagens é que o acesso aleatório é custoso tendo em vista que tem que percorrer toda sua lista, e a possibilidade de fragmentação interna. Quando estamos falando da FAT, suas vantagens seriam: A tabela pode ser carregada em memória, fazendo com que aumente a velocidade de busca de blocos, evitando o custo para acesso aleatório. Suas desvantagens é que há um custo de memória e também causa fragmentação interna.\n\nB)Vantagens do inode: É possível fazer uma busca aleatória com custo baixo, é carregado em memória o endereço de outros arquivos e/ou inodes."

	t = (question, answer)


if __name__ == "__main__":
	OKBLUE = '\033[94m'
	OKGREEN = '\033[92m'
	ENDC = '\033[0m'
	WARNING = '\033[93m'


	while(True):
		print(WARNING + "Você deseja visualizar a resposta de qual questão?" + ENDC)
		print(WARNING + "1 - Questão 1" + ENDC)
		print(WARNING + "2 - Questão 2" + ENDC)
		print(WARNING + "3 - Questão 3" + ENDC)
		print(WARNING + "4 - Questão 4" + ENDC)
		print(WARNING + "5 - Questão 5" + ENDC)
		print(WARNING + "6 - Questão 6" + ENDC)
		print(WARNING + "7 - Questão 7" + ENDC)
		print(WARNING + "0 - Sair" + ENDC)

		option = input()
		option = int(option)
		if option == 0:
			break
		elif option == 1:
			a = questao1()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN + "\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 2:	
			a = questao2()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN + "\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 3:
			a = questao3()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN +"\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 4:
			a = questao4()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN + "\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 5:	
			a = questao5()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN + "\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 6:
			a = questao6()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN +"\n\nResposta:\n\n" + a[1] + ENDC)
		elif option == 7:
			a = questao7()
			print(OKBLUE + "Pergunta:\n\n" + a[0] + ENDC + OKGREEN + "\n\nResposta:\n\n" + a[1] + ENDC)

		print("\n")
