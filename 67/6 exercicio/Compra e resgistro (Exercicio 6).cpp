#include <stdio.h>
#include <locale.h>

 int main(){
 setlocale (LC_ALL,"");

 int qtd;
    printf("Quantos produtos serão cadastrados :");
     scanf("%d", &
	 qtd);

   
  for (int i  = 1; i <= qtd; i++){
	
   int codigo;
   float preco;

 printf("Digite o codigo do produto:");
  scanf("%d", &codigo);

 printf("Digite o prço do produto:");
  scanf("%f", &preco);

 printf("\n=============================\n");
 printf("PRODUTO Cadastrado");
 printf("\n=============================\n");
 printf("Codigo: %d\n", codigo);
 printf("Preco: R$ %.2f\n", preco);
 printf("-----------------------------\n");


  }



  return 0; 
}
