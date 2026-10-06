#include <stdio.h>

int main() {
    int idade;
    
    do{
    	 printf("Digite um idade: ");
        scanf("%d", &idade);
              
 
			} while (idade < 0);		  
    
            printf("idade Valida.\n");
    return 0;
}
