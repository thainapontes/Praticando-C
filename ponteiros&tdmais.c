#include <string.h>
#include <stdio.h>

struct Livro{
    char titulo[100];
    char autor[100];
    int anoPublicacao;
}; //lembrar de adc o ; no final da struct

void imprimirFicha(struct Livro *ptrLivro){
    printf("Titulo: %s\n Autor: %s\n Ano de publicação: %d\n", ptrLivro->titulo, ptrLivro->autor, ptrLivro->anoPublicacao);
}

void analisarTitulo(struct Livro *ptrLivro){ // A única tarefa dela é calcular e mostrar o tamanho.
    size_t tamanho= strlen(ptrLivro->titulo);
    printf("O tamanho desse título é: %zu\n", tamanho); //zu é o correto para size_t
}

void compararAutores(struct Livro *ptrLivro1, struct Livro *ptrLivro2){
    int resultado= strcmp(ptrLivro1->autor,ptrLivro2->autor);
    if (resultado==0){
        printf("Autores iguais.\n");
        
    } else{
        printf("Autores diferentes.\n");
    }
}
    

int main(){
    
    struct Livro livro1, livro2; // criando as variaveis q vamos usar
    fgets(livro1.titulo,100,stdin);
    livro1.titulo[strcspn(livro1.titulo,"\n")]=0;
    fgets(livro1.autor,100,stdin);
    livro1.autor[strcspn(livro1.autor,"\n")]=0;
    scanf("%d",&livro1.anoPublicacao);
    getchar();  // para limpar a barra divisoria e o sistema ler o proximo item corretamente e n ignoralo
    
    
    fgets(livro2.titulo,100,stdin);
    livro2.titulo[strcspn(livro2.titulo,"\n")]=0;
    fgets(livro2.autor,100,stdin);
    livro2.autor[strcspn(livro2.autor,"\n")]=0;
    scanf("%d",&livro2.anoPublicacao);
    getchar();
   
    
    
    //chamando as funções
    
    imprimirFicha(&livro1);// ele quer o endereço de memoria pq é o contrato q a funçao criou, e livro1 n é um ponteiro, é uma variavel normal
    imprimirFicha(&livro2);
    
    analisarTitulo(&livro1);
    analisarTitulo(&livro2);
    
    compararAutores(&livro1,&livro2);
    
    
    
    
    
    
    return 0;
    
}
    
    
    

    

