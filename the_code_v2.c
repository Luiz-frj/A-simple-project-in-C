//Exercicio de C
#include <stdio.h>

//prototipo de função
double cquantitativo (double qntdeitens, int qntdefamilias);

int main(){
     //declaração de variavel local
    int qntdefamilias;

    //entrada de dados
    printf("Informe a quantidade de familias que seram atendidas: ");
    scanf("%d", &qntdefamilias);

    //saida de dados
    printf("******************************\n");
    printf("***** Quantidade de itens para as cestas: *****\n");
    printf("Açucar: %.2lf Kg\n", cquantitativo(3.0, qntdefamilias));
    printf("Arroz: %.2lf Kg\n", cquantitativo(3.0, qntdefamilias));
    printf("Banana: %.2lf Duzias\n", cquantitativo(7.5, qntdefamilias));
    printf("Batata: %.2lf Kg\n", cquantitativo(6.0, qntdefamilias));
    printf("Café: %.2lf Kg\n", cquantitativo(0.6, qntdefamilias));
    printf("Carne: %.2lf Kg\n", cquantitativo(6.0, qntdefamilias));
    printf("Farinha: %.2lf Kg\n", cquantitativo(1.5, qntdefamilias));
    printf("Feijão: %.2lf Kg\n", cquantitativo(9.5, qntdefamilias));
    printf("Leite: %.2lf L\n", cquantitativo(7.5, qntdefamilias));
    printf("Manteiga: %.2lf Kg\n", cquantitativo(0.75, qntdefamilias));
    printf("Oléo: %.2lf L\n", cquantitativo(0.9, qntdefamilias));
    printf("Pão: %.2lf Kg\n", cquantitativo(6.0, qntdefamilias));
    printf("Tomate: %.2lf Kg\n", cquantitativo(9.0, qntdefamilias));
    printf("******************************\n");

    return 0;
}

double cquantitativo(double qntdeitens, int qntdefamilias)
{
    return qntdeitens * qntdefamilias;
}
