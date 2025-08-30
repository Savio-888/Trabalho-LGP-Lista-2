# Autores
Lista 2 do trabalho de LGP, feita por Savio, Sophia, Rafaella, Ana e Kleber, da Sala 113.

# Exercícios
1) Faça um algoritmo que mostre os 12 primeiros números primos.
2) O acesso a uma das salas de um laboratório de pesquisas biomédicas é controlado a partir de uma porta automática. Para abrir a porta desta sala é necessário o uso de uma senha. A senha é formada de um número Y composto de 4 dígitos.
- Este número tem o formato Y = d1 d2 d3 C onde C é o dígito de controle da senha. Por exemplo, se d1=7, d2=2 d3=0 e C=7 então Y=7207.
- O dígito C da senha é uma forma de segurança que impede que pessoas não autorizadas entrem na sala do laboratório. Caso uma pessoa não autorizada consiga digitar uma senha, ela é testada para verificar se é válida.
- O setor de segurança compõe a senha gerando aleatoriamente os dígitos d1, d2, d3 e d4 e o dígito C é calculado da seguinte forma:
  <img width="366" height="68" alt="image" src="https://github.com/user-attachments/assets/ced69af0-3622-4e7f-af09-13fa3ce70157" />
  
Assim, se d1=7, d2=2 d3=0 então X=720 e C=7. Então, a senha válida é Y=7207;
- Se for digitado X=7206 a senha é não válida e a porta permanece fechada.
- Escreva o algoritmo que leia o número X = d1 d2 d3 e gere o número Y conforme a regra acima.
3) Para garantirmos segurança na transmissão de dados, podemos codificá-los antes de transmitir. Suponha um número X qualquer de 4 dígitos na forma d1 d2 d3 d4 (por exemplo, 2371 onde d1=2, d2=3, d3 =7 e d4=1 ou 0476).
- Escreva um algoritmo que transforme o número X = d1 d2 d3 d4 em um número Y = f1 f2 f3 f4, que corresponde a X codificado usando a seguinte regra:
  fi = ((di + 7) mod 10) para i=1, 2,3,4.
  Exemplificando. Se X=7149 então Y=4816 pois:
  d1=7 então f1=(( 7 + 7) mod 10) = 4
  d2=1 então f2=(( 1 + 7) mod 10) = 8
  d3 =4 então f3=(( 4 + 7) mod 10) = 1
  d4=9 então f4=(( 9 + 7) mod 10) = 6
- Deve ser lido X e exibido Y.
4) Dados dois números inteiros positivos X = x1 x2 x3 e Y = y1 y2 y3 para os quais cada dígito está entre 0 e 9, chamamos de produto dígito a dígito entre X e Y de número Z, onde Z = z1 z2 z3 em que:
  z1 = (x1 * y1) mod 10
  z2 = (x2 * y2) mod 10
  z3 = (x3 * y3) mod 10
- Elabore um algoritmo, que leia X e Y e imprima Z.
- Exemplificando, se X=317 e Y=461 então Z=267.
- Novamente exemplificando, se X=684 e Y=597 então Z=028.
5) Um pediatra elaborou uma lista com pesos prováveis para meninos e meninas entre 1 e 3 anos e, freqüentemente, precisa consultar a lista.
- Escreva um algoritmo em Linguagem C++ que, dada a idade de uma criança de 1 a 3 anos, mostre na tela os pesos prováveis para meninos e meninas da mesma idade, seguindo a tabela:
1 ano –Meninos: 8.5 kg a 12.5kg Meninas: 7.5kg a 11.5kg
2 anos –Meninos: 10.1 kg a 15.2kg Meninas: 9.8kg a 14.5kg
3 anos –Meninos: 11.7 kg a 18 kg Meninas: 11.4kg a 17.950kg
- Exemplo:
  Escolha uma idade de 1 a 3 anos: 2
  Pesos Prováveis:
  Meninos:            | Meninas:
  de 10.1 kg a 15.2kg | de 9.8kg a 14.5kg
6) Elaborar um algoritmo para ler somente a parte numérica da placa de um carro e apresentar o dia do rodízio para o mesmo (digitar apenas um número com 4 dígitos).
7) Crie um algoritmo que simule uma calculadora com as operações listadas abaixo, utilizando estrutura de controle ENQUANTO, ESCOLHA e ainda SUBROTINAS (subprogramas, procedimentos, funções)
- Para dois números reais:
  1. Potência de 3
  2. Raiz Quadrada
  3. Fatorial
  4. Sair do programa
8) Escreva algoritmos para calcular e exibir o resultado de cada uma das séries:
  a) S = 1/2 + 1/4 + 1/8 + 1/16 + 1/32 + ..... + 1/16384
  b) S = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ..... + 1/200
9) Elaborar um algoritmo que se utilize de funções com passagem de parâmetros. Ele deverá receber um número inteiro, via teclado, e passar esse número, como parâmetro, para uma função.
- Essa função deverá ser capaz de analisar esse número e retornar, a quem a chamou, uma informação de 0 (zero) para o caso do número passado como parâmetro ser PAR e de 1 (um) para o caso de o número passado como parâmetro ser ÍMPAR.
- De posse dessa informação, o algoritmo que chamou essa função deverá apresentar em tela o valor do número digitado e se ele é PAR ou ÍMPAR.
10) Elabore um algoritmo que utilize arrays (matrizes 1D) para:
- armazenar os nomes dos 50 alunos da turma do 1º semestre;
- armazenar o total da média (entrada de quatro notas) de cada aluno e pesquisar por média quem foi aprovado e reprovado, exibindo esse resultado.
