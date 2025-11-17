#include <stdio.h>

int main () {

    float totalConta;
    int qtdPessoas;
    float percentualDesconto;
    float valorDesconto;
    float totalComDesconto;
    float valorPorPessoa;

    printf("Digite o valor total da conta: ");
    scanf("%f", &totalConta);

    printf("Digite a quantidade de pessoas na mesa: ");
    scanf("%d", &qtdPessoas);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);


    if (qtdPessoas <=0){
        printf("Quantidade de pessoas invalida.\n");
        
        return 0;
    }
    
    valorDesconto = totalConta * (percentualDesconto/ 100.0);
    totalComDesconto = totalConta - valorDesconto;
    valorPorPessoa = totalComDesconto / qtdPessoas;

    printf("\nValor do desconto: R$ %.2f\n", valorDesconto);
    printf("Total com desconto: R$ %.2f\n", totalComDesconto);
    printf("Valor por pessoa: R$ %.2f\n", valorPorPessoa);


    return 0;
}