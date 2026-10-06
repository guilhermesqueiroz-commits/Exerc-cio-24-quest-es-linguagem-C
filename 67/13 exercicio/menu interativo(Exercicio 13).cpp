#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL,"");
	int opc;
	
	do{
  printf("========================\n");	
  printf("          MENU          \n");
  printf("========================\n"); 
  printf("1- Cadastrar\n");
  printf("2- Consultar\n");
  printf("3- Relatorio\n");
  printf("0- Sair\n");
  scanf("%d", &opc);

	
	switch (opc){
	
	case 1:
	printf("Cadastrando Produto.............\n");
	break;
	
	case 2:
	printf("Consultando Produto...........\n");
	break;
	
	case 3:
	printf("Relatorio!\n");
	break;
		
   case 0:
   printf("Encerrando.......\n");
   break;
   
   default:
   	printf ("Opção Invalida!!!\n");
   	break;
    	
}
    
  	}while(opc !=0);  
    
    return 0;
}
