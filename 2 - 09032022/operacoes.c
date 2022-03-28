// programa que realiza as quatro operações basicas 

#include <stdio.h> // bliblioteca standard de Input/Output 
int main(){
    int n1,n2,soma,sub,div,mut; // Declaração das vars n1 e n2 inteira  
printf("Digite um valor inteiro e Enter\n"); // mostrar na tela 
scanf("%d" , &n1); // Ler o primeiro número, NÂO digitar nada entre %d 
printf("\nDigite um segundo valor inteiro e Enter:\n"); // mostrar na tela 
scanf("%d" , &n2); // Ler o segundo número, Não digitar nada entre %d

soma = n1 + n2; 
printf("\nValor da soma é: %d\n",soma); // soma 
sub = n1 - n2; 
printf("\nValor da subtrção; %d\n",sub); // subtração 
mut = n1 * n2; 
printf("\nValor da multiplicação; %d\n",mut); // multiplicção 
div = n1 / n2; 
printf("\nValor da divisão é %d\n",div); //divisão 
return 0;  
}
    //fim