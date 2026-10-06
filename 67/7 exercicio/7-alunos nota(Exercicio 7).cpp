#include <stdio.h>
#include <locale.h>

 int main(){
 setlocale (LC_ALL,"");
 int qtd;
 float nota;
  
  printf("Quantidade de estudantes: ");
  scanf("%d", &qtd);
  
  for (int i = 1; i <= qtd; i++){
  	
  	printf("Nota do estudante %d: ", i);
  	scanf("%f",&nota);
  }
 if (nota >=7.0) {
 	printf("Nota maior ou igual a 7");
 }
 else
 printf("Nota menor que 7");


  return 0; 
}
