#include <stdio.h>
#include <locale.h>


int main(){
 setlocale (LC_ALL,"");
 
 int software= 0;
 int hardware = 0;
 int rede = 0;
 int opc;
 
 for (int i = 1; i <= 10; i++){
 
 
 do{
 
 	printf("Computador  (1-Softdware|2-Hardware|3-Rede):", i);	
 	scanf("%d", &opc);
	 
	 switch (opc){
	 
	 
	 case 1:
	 	software++;
	 	printf("Software selecionado \n");
	 	break;
	 	
	 	case 2:
		 hardware++;
	 	printf("Hardwware selecionado \n");
	 	break;
	 	
	 	case 3:
	 		rede++;
	 	printf("Rede selecionado\n");
	 	break;
	
	
	 	default:
	 		printf ("Opção Invalida!!!");
	 		break;
	 }
   }while(opc < 1 || opc > 3);
}

printf("========================\n");
printf("         RELATÓRIO      \n");
printf("========================\n");
printf("Software %d\n", software);
printf("Hardware %d\n", hardware);
printf("Rede %d\n", rede);


	
return 0;		
}

