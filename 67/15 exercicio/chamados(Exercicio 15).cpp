#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL,"");

int qtd,opc;


printf("Quantos chamados vai cadastrar ?:");
 scanf("%d", &qtd);

for (int i = 1; i <= qtd; i++) {
        int codigo, prioridade;
        
        printf("\n--- Cadastro do Chamado %d ---\n", i);
        printf("Digite o codigo do chamado:");
        scanf("%d",&codigo);
        
        do{
        printf("Prioridade (1 - Urgente, 2 - Prioritario, 3 - Normal): ");
            scanf("%d", &prioridade);	
        if (prioridade < 1 || prioridade > 3 ){
        	printf("Prioridade Invalida!!!. Tente Novamente\n");
		}	
        	
		} while (prioridade < 1 || prioridade > 3 );
		
		printf("\n========================\n");
        printf("   CHAMADO CADASTRADO   \n");
        printf("========================\n");
        printf("Codigo: %d\n", codigo);
        printf("Prioridade: ");
		
		if (prioridade == 1) {
            printf("Urgente\n");
        } 
        else if (prioridade == 2) {
            printf("Prioritario\n");
        } 
        else {
            printf("Normal\n");
        }
        printf("------------------------\n");
    }
		
		

    return 0;
}

