#include <stdio.h>

#define RESET   "\033[0m"
#define AZUL    "\033[34m"
#define VERDE   "\033[32m"
#define AMARELO "\033[33m"

void menu () {
    printf(AZUL);
    printf("============================================\n");
    printf("       GERENCIADOR DE BIBLIOTECA\n");
    printf("============================================\n");
    printf(RESET);

    printf(VERDE "[1]" RESET " Cadastrar livro\n");
    printf(VERDE "[2]" RESET " Buscar livro\n");
    printf(VERDE "[3]" RESET " Listar livros\n");
    printf(VERDE "[4]" RESET " Cadastrar usuário\n");
    printf(VERDE "[5]" RESET " Realizar empréstimo\n");
    printf(VERDE "[6]" RESET " Registrar devolução\n");
    printf(AMARELO "[0]" RESET " Sair\n");
}
