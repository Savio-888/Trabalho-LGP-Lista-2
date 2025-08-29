#include <stdio.h>
#include <math.h>
// Crie um algoritmo que simule uma calculadora com as operações listadas abaixo, utilizando estrutura de controle ENQUANTO, ESCOLHA e ainda SUBROTINAS (subprogramas, procedimentos, funções) Para dois números reais:
// 1- Potência de 3
// 2- Raiz quadrada
// 3- Fatorial
// 4- Sair do programa

void limparbuffer() { // Limpa o buffer, "jogando fora" todos os caracteres do buffer, até chegar na quebra de linha.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};
void potencia(float num1, float num2) { // Função da potencia de 3.
    // Calcula as potencias.
    float resultado1 = pow(num1, 3);
    float resultado2 = pow(num2, 3);
    // E exibe o resultado
    printf("O primeiro numero (%f) elevado a 3 fica %f.\n", num1, resultado1);
    printf("E o segundo numero (%f) elevado a 3 fica %f.\n", num2, resultado2);
}; void raizquad(float num1, float num2) { // Função da raiz quadrada.
    // Calcula as raizes.
    float resultado1 = sqrt(num1);
    float resultado2 = sqrt(num2);
    // E exibe o resultado
    printf("A raiz quadrada do primeiro numero (%f) fica:  %f.\n", num1, resultado1);
    printf("E a raiz quadrada do segundo numero (%f) fica:  %f.\n", num2, resultado2);
}; void fatorial(float num1, float num2){ // Função dos fatoriais
    // Declara as variaveis para armazenar os resultados
    float resultado1 = num1;
    float resultado2 = num2;
    // Calcula os fatoriais e armazena os resultados nas variaveis.
    for(int i = num1-1; i > 1; --i){
        resultado1 *= i;
    } for(int i = num1-1; i > 1; --i){
        resultado2 *= i;
    } // Exibe os resultados.
    printf("O fatorial do primeiro numero (%f), e igual a: %f.\n", num1, resultado1);
    printf("O fatorial do segundo numero (%f), e igual a: %f.\n", num2, resultado2);
};
int main() {
    float n1;
    float n2;
    int escolha;
    while(1){
        printf("---CALCULADORA---\n");
        printf("Digite o 1 numero: ");
        scanf("%f", &n1);
        limparbuffer();
        printf("Digite o 2 numero: ");
        scanf("%f", &n2);
        limparbuffer();
        printf("Escolha 1 das opcoes:\n[1] POTENCIA DE 3\n[2] RAIZ QUADRADA\n[3] FATORIAL\n[4] SAIR\nESCOLHA: >>");
        scanf("%d", &escolha);
        limparbuffer();
        switch (escolha){ // Chama diferentes subrotinas
            case 1:
                potencia(n1, n2);
                break;
            case 2:
                raizquad(n1, n2);
                break;
            case 3:
                fatorial(n1, n2);
                break;
            case 4:
                return 0;
                break;
            default:
                printf("NUMERO INVALIDO");
        }
    }
    return 0;
}
