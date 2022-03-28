//Programa p/ calcular area, dado o raio 
#include <stdio.h> //biblioteca standard de Input/Ouput 
#define PI 3.14159 //constante pi 
//a seguir função main()
int main()
{
    float raio, area; // duas vars, declaradas 
    //mostra na tela uma mensagem com printf 
    printf("Digite o valor do raio do circulo, e ENTER\n");
    // le do teclado com scanf; note & em &raio 
    scanf("%f", &raio); //exemplos: 1.23 12.3e-1
    //a seguir mostra na tela o valor do raio lido 
    //usando 12 colunas, e 2 decimais arrendodados 
    //por ex. 1.576 e' arrendodando para 1.58, so' na tela 
    printf("Raio digitado e' %12.2f\n", raio);
    area = PI * raio * raio; 
    printf("Area do circulo com raio %f e' %f\n", raio, area); 
    return 0;
} // fim main 
