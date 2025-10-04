#include <stdio.h>
#include <string.h> 

struct Produto{
    
        char nome[30];
        int codigo;
        float preco;
        
    } typedef Produto;

int main() {
    
   Produto caderno;
   
   fgets(caderno.nome,30,stdin);
   caderno.nome[strcspn(caderno.nome, "\n")] = 0; 
   
   scanf("%d %f", &caderno.codigo, &caderno.preco);
   printf("Produto: %s\n Código: %d\n Preço: %.2f\n", caderno.nome, caderno.codigo,caderno.preco);
   

return 0;

}
