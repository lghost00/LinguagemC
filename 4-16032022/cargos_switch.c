// Programa para exibir o salário do cxargo de acrodo com a escolha do usuário 

#include <stdio.h> 

int main(){

    int opcao = 0; 

    //comando para limpar a tela 

    system("clear"); //Clear(Limpar a tela)
    printf("#######################################################");
    printf("\n#\t Programa para exbir salário\t\t\t#\n");
    printf("#######################################################");
    printf("\nEscolha um dos cargos abaixo digitando o n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("#######################################################");

    scanf("%d",&opcao); 

    switch(opcao){

        case 1:

        printf("O salário de Diretor é R$ 15.000,00");
        break;

        case 2: 

        printf("O salário de Gerente é R$ 12.000,00");
        break; 

        case 3: 

        printf("O salário de Analista é R$ 8.000,00");
        break;

        case 4:


        printf("O salário de Assistente é R$ 4.000,00");
        break; 

        case 5:

        printf("O salário de Auxiliar é 4.000,00");
        break; 

        default: 


        printf("Não há salário"); 
        break; 


    }

    return 0; 
}