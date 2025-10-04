#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main() {

    char palavra[50];
    char palavra_invertida[50];
    int j;
    
    scanf("%s", palavra); // nesse caso, tudo bem usar o scanf, pois ele quer apenas uma palavra.
    size_t tamanho= strlen(palavra);
    
    for (int i = tamanho - 1, j = 0; i >= 0; i--, j++){
        palavra_invertida[j]=palavra[i];
    }
    palavra_invertida[j] = '\0';
    
    printf("%s", palavra_invertida);

return 0;

}
