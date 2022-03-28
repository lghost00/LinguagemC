// programa para calcular a situação do aluno.
//neste prgrama teremos as seguintes saidas: 
//Aprovado, quando nota maior ou iguala 7 
//Reprovado, quando nota menor ou igual a 4    
//Recuperação, quando a nota entre maior que 4 e menor que 7 

#include <stdio.h>

#define MEDAPROV 7.0 
#define MEDREPROV 4.0 

int main(){
float na; 
printf("Professor Leon Lima, digite a nota do aluno e tecle Enter\n")
scanf("%f", &na); 

if(na >= MEDAPROV){
printf("Seu aluno está aprovado"); 

}
else if(na <= MEDREPROV){
 printf("Seu aluno está reprovado");    
}
else{
    printf("O aluno está em recuperação"); 
}
return 0
}

// Fim 