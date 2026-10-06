#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int opcao;
    int tipo;
    int prioridade;

    
    int software = 0;
    int hardware = 0;
    int rede = 0;
    int urgente = 0;
    int prioritario = 0;
    int normal = 0;
    int chamados = 0;

    do {
        printf("\n============================\n");
        printf(" CENTRAL DE ATENDIMENTOS FDA \n");
        printf("============================\n");

     
        do {
            printf("Digite o tipo de atendimento:\n");
            printf("1 - SOFTWARE\n");
            printf("2 - HARDWARE\n");
            printf("3 - REDE\n");
            printf("Opção: ");
            scanf("%d", &tipo);

           
            if (tipo < 1 || tipo > 3) {
                printf("Opção Inválida! Digite 1, 2 ou 3.\n");
            }

            switch (tipo) {
                case 1:
                    software++;
                    printf("Atendimento de Software selecionado...\n");
                    break;
                case 2:
                    hardware++;
                    printf("Atendimento de Hardware selecionado...\n");
                    break;
                case 3:
                    rede++;
                    printf("Atendimento de Rede selecionado...\n");
                    break;
            }
        } while (tipo < 1 || tipo > 3);

     
        do {
            printf("Digite a prioridade:\n");
            printf("1 - Urgente\n");
            printf("2 - Prioritário\n");
            printf("3 - Normal\n");
            printf("Opção: ");
            scanf("%d", &prioridade);

           
            if (prioridade < 1 || prioridade > 3) {
                printf("Prioridade Inválida! Digite 1, 2 ou 3.\n");
            } else if (prioridade == 1) {
                urgente++;
                printf("Prioridade Registrada: Urgente\n");
            } else if (prioridade == 2) {
                prioritario++;
                printf("Prioridade Registrada: Prioritário\n");
            } else {
                normal++;
                printf("Prioridade Registrada: Normal\n");
            }
        } while (prioridade < 1 || prioridade > 3);

       
        chamados++;

      
        printf("Deseja registrar outro atendimento? (1 - Sim | 0 - Sair): \n");
        scanf("%d", &opcao);

 
        if (opcao != 1 && opcao != 0) {
            printf("Opção não reconhecida. Encerrando o sistema...\n");
            opcao = 0;
        }

    } while (opcao != 0);

 
    if (chamados > 0) {
        printf("=======================================\n");
        printf("           RELATÓRIO FINAL             \n");
        printf("=======================================\n");
        printf("Total de Atendimentos : %d\n", chamados);
        printf("---------------------------------------\n");
        printf("Atendimentos de Software : %d\n", software);
        printf("Atendimentos de Hardware : %d\n", hardware);
        printf("Atendimentos de Rede     : %d\n", rede);
        printf("---------------------------------------\n");
        printf("Prioridade Urgente       : %d\n", urgente);
        printf("Prioridade Prioritária   : %d\n", prioritario);
        printf("Prioridade Normal        : %d\n", normal);
        printf("=======================================\n");
    } else {
        printf("\nNenhum chamado foi registrado durante a execução.\n");
    }

    return 0;
}
