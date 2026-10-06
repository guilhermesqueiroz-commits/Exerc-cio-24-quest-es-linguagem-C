#include <stdio.h>
#include <locale.h>


int main(){
 setlocale (LC_ALL,"");
 
 
 float valor = 0.0;
 float total = 0.0;
 float media = 0.0;
 
 
 for (int i = 1 ; i <=5 ; i++){
 	do{
	 
 	
 printf("Digite o valor da %d venda: R$ ", i);
 scanf("%f", &valor);
 
 if(valor<=0){
 	printf("Valor Invalido. Digite um valor valido\n");
 }	
 	
}while( valor <=0);

total += valor;
}
media = total/5.0;
	
	
printf("========================\n");
printf("         RELATÓRIO      \n");
printf("========================\n");
printf("Total vendido %.2f\n",total);
printf("Media das Vendas %.2f\n",media);	
	
	
return 0;		
}

