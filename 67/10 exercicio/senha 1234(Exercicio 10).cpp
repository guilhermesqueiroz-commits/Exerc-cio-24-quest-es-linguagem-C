#include <stdio.h>

int main() {
    int senha;
    
    while (67){
        printf("Digite a senha: ");
        scanf("%d", &senha);
        
        if (senha == 1234) {
            printf("Acesso permitido.\n");
            break;
        } else {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }
    
    return 0;
}
