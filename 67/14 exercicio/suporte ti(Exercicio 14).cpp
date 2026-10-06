#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL,"");
	int opc;
	
	do{
  printf("========================\n");	
  printf("       SUPORTE DE TI    \n");
  printf("========================\n"); 
  printf("1- Software\n");
  printf("2- Hardware\n");
  printf("3- Rede\n");
  printf("0- Sair\n");
  scanf("%d", &opc);

	
	switch (opc){
	
	case 1:
	printf("Suporte de Ti Selecionado\n");
	break;
	
	case 2:
	printf("Suporte de Hardware Selecionado\n");
	break;
	
	case 3:
	printf("Suporte de Rede Selecionado!\n");
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
