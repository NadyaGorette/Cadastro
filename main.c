#include <stdio.h>
#include <stdlib.h>
#define TAM_NOME_COMPLETO 100

int main()
{

struct cliente {
    char nome[TAM_NOME_COMPLETO], endereco[101], telefone[15];
};

printf("**Seja Bem vindo**\n\n");


    struct cliente cli;


    printf("\n Informe o  seu nome completo: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_COMPLETO, stdin);

    printf("\n Informe o endereço: ");
    fflush(stdin);
    fgets(cli.endereco, 101, stdin);

    printf("\n Informe o seu telefone: ");
    fflush(stdin);
    fgets(cli.telefone, 15, stdin);
    printf("\n\n");


    printf("**Ficha com todos os dados fornecidos anteriormente:**\n\n");

    printf("\n Nome: %s", cli.nome);
    printf("\n Endereco: %s", cli.endereco);
    printf("\n Telefone %s", cli.telefone);

    printf("\n\n************FIM**************\n\n");
}




