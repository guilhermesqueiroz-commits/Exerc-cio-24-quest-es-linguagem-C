#include <stdio.h>
#include <locale.h>


int main(){
 setlocale (LC_ALL,"");
 
 int opc;
 int cod,tipo,prioridade;
 int software = 0;
 int hardware = 0;
 int rede = 0;
 int urgente = 0;
 int prioritario = 0;
 int normal = 0;
 int chamados = 0;
 
 do{
 
 printf("========================\n");
 printf(" SISTEMA DE SUPORTE \n");
 printf("========================\n");
 
 printf("Digite um número\n");
 printf("1-REGISTRAR CHAMADO\n");
 printf("2-RELATÓRIO\n");
 printf("3-Sair\n");
 scanf("%d", &opc);
 
 switch (opc){
 	
 	case 1:
 		printf("Registrando Chamado\n");
 		printf("Aguarde.............\n");
 		printf("Informe seu código:");
 		scanf("%d",&cod);
 			do{
 		printf("Tipo de suporte 1-Software|2-Hardware|3-Rede:\n");
 		scanf("%d",&tipo);
 		
		 
 		switch(tipo){
 			
 		case 1:
 			software++;
		 printf("Software selecionado. Aguarde.........\n");
		 break;
		 
		 case 2:
		 	 hardware++;
		  printf("Hardware selecionado. Aguarde.........\n");
		  break;
		  
		  case 3:
		  	rede++;
		   printf("Rede selecionado. Aguarde.........\n");
		   break;
		   
		   default:
		   	printf("Opção invalida. Digite outro numero\n");
		   	break;
		 }
   }while (tipo < 1 || tipo > 3);
   
   do{
   
   printf("Prioridade 1-Urgente|2-Priotitario|3-Normal\n");
   scanf("%d",&prioridade);
    
    switch (prioridade){
    	
    	case 1:
    		urgente++;
    		printf("Prioridade: Urgente\n");
    		break;
    		
    		case 2:
    			prioritario++;
    			printf("Prioridade: Prioritario\n");
    			break;
    			
    			case 3:
    				normal++;
    			printf("Prioridade: Normal\n");
    			break;
    			
    			default :
    				printf("Opção Invalida. Digite outro numero\n");
    				break;
    	
	}
	
 	
}while (prioridade < 1 || prioridade > 3);
chamados++;
break;
 
 case 2 :
 printf("=========================\n");
 printf("       RELATÓRIO      \n");
 printf("=========================\n");
 printf(" Total de Chamados: %d\n",chamados);
 printf("Chamados de Software:%d\n",software);
 printf("Chamados de Hardware:%d\n",hardware);
 printf("Chamados de Rede:%d\n",rede);
 printf("Chamados Urgentes:%d\n",urgente);
 printf("Chamados Normais: %d\n",normal);
 printf("Chamados Prioritarios:%d\n",prioritario);
 printf("---------------------------------------\n");
 break;
 
 case 3 :
 	printf("Saindo.......\n");
 	break;
 
 case 0:
 printf("Encerrando Sistema\n");
 break;
 
 
 default :
 	printf("Opção invalida\n");
 	break;
 	
}
}while (opc !=0 && opc!=3);
return 0;		
}
