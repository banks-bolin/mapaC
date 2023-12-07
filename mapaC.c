#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#define MAXNOME 50
#define MAXREG 100
#define MAXCPF 12

void menuTexto();
void cadastraCliente();
void setoresTexto();
void menuSetores();
void listarTotal();
void filtraSetor();

typedef struct{
    char nome[MAXNOME];
    char cpf[MAXCPF];
    int escolha;
}cliente;

cliente registro[MAXREG];
int contador  = 0;

int main(){
    int escolha; int escolha2;
    setlocale(LC_ALL, "Portuguese");
    menuTexto();
    fflush(stdin);
    scanf("%d", &escolha);
    do{
        switch(escolha){
            case 1 : //solicitar atendimento
                cadastraCliente();
                setoresTexto();
                switch (escolha) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                    break;
                    case 5:
                        break;
                    default: printf("Opção inválida");
                        break;
                }
                menuSetores();
                break;
            case 2: //Listar atendimentos registrados
                listarTotal();
                break;
            case 3: //listar atendimentos por setor
                filtraSetor();
                break;
            case 4: //sair do sistema
                break;
            default: // opção invalidada
                printf("Opção Inválida");
                break;
        }
    }while(escolha != 4);
    return 0;
}

void menuTexto(){
    system("cls");
    printf("Bem vindo ao sistema de atendimento\n");
    printf("Digite uma das opções\n");
    printf("1 - Solicitar atendimento.\n");
    printf("2 - Listar atendimentos registrados.\n");
    printf("3 - Listar Atendimentos por setor.\n");
    printf("4 - Sair.\n");
}
void setoresTexto(){
    printf("Digite uma das opções de atendimento");
    printf("Por favor, selecione uma dentre as opções de setor a seguir: \n");
    printf("1 - Abertura de conta.\n");
    printf("2 - Caixa.\n");
    printf("3 - Gerente Pessoa Física.\n");
    printf("4 - Gerente Pessoa Jurídica.\n");
    printf("5 - Voltar ao menu inicial.\n");
}
void cadastraCliente(){
    printf("Digite o seu nome: \n\n");
    fflush(stdin);
    gets(registro[contador].nome);
    printf("Digite seu CPF: \n\n");
    fflush(stdin);
    gets(registro[contador].cpf);
    contador++;
}
void menuSetores(){
    int setor;
    setoresTexto();
    scanf("%d", &setor);
    switch (setor){
        case 1: //Abertura de conta;
        break;
        case 2://Caixa
        break;
        case 3://Gerente Pessoa Física
        break;
        case 4://Gerente Pessoa Juridica
        break;
        case 5://Retornar ao menu inicial
        break;
        default://opção inválida
            printf("Entrada inválida, por favor, tente novamente.\n");
        break;
    }
}
void listarTotal() {
    int setor;
    for (int i = 0; i < contador; i++) {
        printf("Registro nº %d\n", i + 1);
        printf("Nome: %s\n", registro[i].nome);
        printf("CPF %s\n", registro[i].cpf);
        if (setor == 1) {
            printf("Setor 1 - Abertura de conta.\n");
        } else if (setor == 2) {
            printf("Setor 2 - Caixa.\n");
        } else if (setor == 3) {
            printf("Setor 3 - Gerente Pessoa Física.\n");
        } else {
            printf("Setor 4 - Gerente Pessoa Jurídica.\n");
        }
    }
}


void filtraSetor() {
    int setor;
    do {
        setoresTexto();
        printf("\n\nEscolha o setor que queira listar: ");
        fflush(stdin);
        scanf("%d", &setor);
        printf("Aguarde, por favor... \n Filtrando por setor...\n");
        switch (setor) {
            case 1:
                for (int i = 0; i < contador; i++) {
                    if (setor == 1) {
                        printf("Registro nº %d\n", i + 1);
                        printf("Nome: %s\n", registro[i].nome);
                        printf("CPF %s\n", registro[i].cpf);
                        printf("Setor 1 - Abertura de conta.\n");
                    }
                }
                break;
            case 2:
                for (int i = 0; i < contador; i++) {
                    if (setor == 2) {
                        printf("Registro nº %d\n", i + 1);
                        printf("Nome: %s\n", registro[i].nome);
                        printf("CPF %s\n", registro[i].cpf);
                        printf("Setor 1 - Abertura de conta.\n");
                    }
                }
                break;
            case 3:
                for (int i = 0; i < contador; i++) {
                    if (setor == 3) {
                        printf("Registro nº %d\n", i + 1);
                        printf("Nome: %s\n", registro[i].nome);
                        printf("CPF %s\n", registro[i].cpf);
                        printf("Setor 1 - Abertura de conta.\n");
                    }
                }
                break;
            case 4:
                for (int i = 0; i < contador; i++) {
                    if (setor == 4) {
                        printf("Registro nº %d\n", i + 1);
                        printf("Nome: %s\n", registro[i].nome);
                        printf("CPF %s\n", registro[i].cpf);
                        printf("Setor 1 - Abertura de conta.\n");
                    }
                }
                break;
            case 5:
                printf("Voltando ao menu Inicial");
                break;
            default:
                printf("Opção inválida");
                break;
        }
    } while (contador > 0);
}