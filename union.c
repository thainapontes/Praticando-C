#include <stdio.h>
#include <string.h> 

union DadoMisto{
    int valor_int;
    char valor_char;
    
    }typedef DadoMisto;
    

int main() {
  
  
  DadoMisto prova;
  
  prova.valor_int=65;
  prova.valor_char= 'B';
  
  printf("%d %c", prova.valor_int, prova.valor_char);
   

return 0;

}
