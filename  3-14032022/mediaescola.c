// programa para calcular o resultado da situação do aluno se está aprovado ou reprovado. baseando-se na média escolar

#include <stdio.h> // bilbioteca standard de Input/Output 

//definir uma constante. Sempre em letras maiúsculas 

#define MEDIAESCOLA 7.0 

int main(){
    //declaração da variável notaAluno com o tipo float 
    float notaAluno; 
    
    printf("Professor Leon Lima digite a nota do seu aluno e tecle Enter/n");
    scanf("%f" ,&notaAluno);

    // Desviio de fluxo com if .. else 
    if(notaAluno >= MEDIAESCOLA){
        printf("Seu aluno está aprovado"); 
    
    }
    else{ 
        printf("Seu aluno está reprovado");
    }
return 0;
}

// fim 


