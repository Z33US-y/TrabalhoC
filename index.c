#include <stdio.h>

int main () {

    FILE *lista_cliente;

    int num, num2;


    while (num != 4) {
        system("cls");
        printf("\t\tCliente");
        printf("\t\tDIGITE 1 PARA ESPCIFICAÇÕES DE CLINETE: ");
        scanf("%d", &num);

        switch(num){
        case 1:
            printf("1-CRIAR UM CLIENTE\n2-BUSCAR UM CLIENTE NA LISTA\n3-ATUALIZAR UM CLIENTE\n4-DELETAR UM CLIENTE\nDigitar umas das opções: ");
            scanf("%d", &num2);

            switch (num2) {
            case 1:
                system("cls");
                printf("\t\tCLIENTE\n\n");
                lista_cliente = fopen("Lista_Cliente.txt", "a");


                struct dados_cliente {
                    char nome [50];
                    char idade [50];
                    char cpf [50];
                };
                struct dados_cliente cliente;

                printf("NOME DO CLIENTE: ");
                scanf("%s", &cliente.nome);

                printf("\nIDADE: ");
                scanf("%s", &cliente.idade);

                printf("\nCPF: ");
                scanf("%s", &cliente.cpf);

                fprintf(lista_cliente, "%s\n %s\n %s", cliente.nome, cliente.idade, cliente.cpf);
                fclose(lista_cliente);

                system("pause");
                
                
                break;

                case 2:

                system("cls");
                printf("\t\tEXIBINDO CADASTRO... \n");
                lista_cliente = fopen("Lista_Cliente.txt", "r");

                while (fscanf(lista_cliente, "%s%s%s", cliente.nome, cliente.idade, cliente.cpf) != -1) {
                    printf("NOME DO CLIENTE: %s\nIDADE: %s\nCPF: %s\n", cliente.nome, cliente.idade, cliente.cpf);
                    system("pause");
                }
                
                fclose(lista_cliente);
                break;

                case 3:
                system("cls");

                    fclose(lista_cliente);

                break;

                case 4:
                system("cls");
                int op;
                printf("DESEJA REALMENTE EXCLUIR TUDO?\n1 - EXCLUIR TUDO\n2 - NÃO EXCLUIR\nDigitar: ");
                scanf("%d", &op);
                    if (op == 1) {
                        struct midia;
                        lista_cliente = fopen("Lista_Cliente.txt", "w");
                        printf("TODOS DADOS FORAM EXCLUIDOS...\n");
                        fclose(lista_cliente);
                        
                    }
                    
            
                break;
            }
                break;


                break;
            }
        }

        return 0;
    }