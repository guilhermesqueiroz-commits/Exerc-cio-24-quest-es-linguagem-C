#include <stdio.h>
#include <locale.h>


int main(){
 setlocale (LC_ALL,"");
 
 int fucionando= 0;
 int defeito = 0;
 int status;
 
 for(int i = 1; i <=10;i++){
 	do{
 		printf("Computador %d (1-Funcionando| 0-Com defeito)",i);	
 	scanf("%d", &status);	
	 
	if (status !=0 && status !=1){
		printf("Opção invalida! Digite apenas 0 ou 1.\n");	
		
 }
	
	 
	 }while (status != 0 && status !=1);



if (status ==1){
	  fucionando++;
}else{ defeito++;
}

}
printf ("Resultado Final\n");
printf("Computadores funcionando %d\n",fucionando);
printf("Computadores com defeitos %d\n", defeito);	
	
	
return 0;		
}

