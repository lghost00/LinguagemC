// Programa para calcular a quantidade de anos bissextos desde 1950 a 2022 

#include <stdio.h> 

int main(){

int qtd = 0;
int ano; 

for(ano = 1950 ; ano <= 2022 ; ano++){
if( ano % 4 == 0){
printf("%d é Bissexto\n",ano); 
qtd++; 

}

}
printf("Encontramos %d anos bissextos",qtd); 

return 0; 

}
