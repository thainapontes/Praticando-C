#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main() {
    
    char palavra[100];
    int contador_vogais=0;
    int contador_consoantes=0;
    
    fgets(palavra, 100, stdin);
    palavra[strcspn(palavra, "\n")] = 0;
    
    size_t tamanho= strlen(palavra);
    
    
    
    for (int i=0; i<tamanho;i++){
        char c = tolower(palavra[i]);
        if(c=='a'|| c=='e' || c=='i' || c=='o'|| c=='u'){
            contador_vogais=contador_vogais+1;
        } else if (c >= 'a' && c <= 'z') {
            contador_consoantes=contador_consoantes+1;
        }
            
    }
    
    printf("Vogais: %d\n Consoantes: %d\n", contador_vogais, contador_consoantes);


return 0;

}
