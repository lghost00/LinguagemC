// progrma de divisão com números quebrados 
#include <stdio.h> // biblioteca standard de Input/Output

int main(){ 
    float a, b, c; // números e a divisão 
    printf("Digite um numero e de Enter:\n"); //usuário escreva o número 
    scanf("%f" ,&a); // Ler do valor de a
    printf("Digite um numero e de Enter:\n"); // Usuário escreva o número 
    scanf("%f" ,&b); // Ler o valor de b 
    c = a / b; // Calculo de divisão 
    printf("O resultado é: %f \n", c); // Resultado da divisão 
    return 0; 

} // Fim 