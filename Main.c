#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

void menu(Tree * tree) {
    int option = -1;
    
    while(option != 10) {
        printf("\n\n\t\tMenu de Opções");
        printf("\n01. Recarregar arquivo");
        printf("\n02. Listar todos os nomes em ordem alfabética");
        printf("\n03. Listar todos os nomes que contém uma substring fornecida");
        printf("\n04. Inserir um novo nome na memória");
        printf("\n05. Remover um nome da memória");
        printf("\n06. Listar e remover da memória todos os nomes que são maiores, em ordem alfabética, que um nome fornecido");
        printf("\n07. Listar e remover da memória todos os nomes que são menores, em ordem alfabética, que um nome fornecido");
        printf("\n08. Salvar o conteúdo da memória em um arquivo texto");
        printf("\n09. Créditos");
        printf("\n10. Sair");
        printf("\nEscolha a opção(Apenas Números): ");

        scanf("%d", &option);    

        switch (option) {
        case 1:        
            break;
        case 2:
            print_tree(tree);
            break;
        case 3:
            break;
        case 4:                        
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            system("clear");
            return menu(tree);
            break;
        }

    }    
}

int main(int argc, char *argv[]) {    
    Tree * tree = create();    
    add_node(tree, "ana");
    add_node(tree, "bruno");
    add_node(tree, "caio");
    add_node(tree, "lucas");
    menu(tree);
    return 0;    
}

