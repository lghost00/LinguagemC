// Programa para validar o CPF do usuário. Quando o cpf for inserido, pegamos os 9 primeiros digitos e passamos para o cálculo; 
// È utilizado um número por vez do cpf multiplicamos pelo peso, partindo de 10 e indo até 2. Na segunda parte 
// pegamos os 9 primeiros mais o digito encontrado e multiplicamos pelo peso 
// Se o rsto da divisão for menos que 2, então o digito será 0; caso contrário o resto será subtraído por 11

#include <stdio.h>

int main(){

    int peso10 = 10; 
    int peso11 = 11;
    int total = 0;
    int resto = 0;  
    char cpf[11];           
    system ("clear");
    printf ("Digite o seu CPF sem os traços:  \n");
    scanf ("%s",cpf);

// Converter todos os caracteres do cpf para o número. Para isso devemos criar um conjunto de números 
//em tipo int e realizar a conversão usando for

int icpf[11]; 
for(int x = 0 ; x <= 10 ; x++){
    icpf[x] = cpf[x] - 48; 
}
for(int i = 0 ; i <= 8 ; i++){
    total += icpf[i]*peso10;
    peso10--; 

}
resto = total % 11; 

/* Se o resto da divisão for menor que2, então o primeiro  digito de verificação será 0(zero)*/

if(resto < 2){
    icpf[9]=0; 

}

else{
    icpf[9] = 11 - resto; 

}
total = 0; 
resto = 0; 

for(int i = 0 ; i <= 9 ; i++){
    total+= icpf[i]*peso11; 
    peso11--; 

}

resto = total % 11; 
if(resto < 2){
    icpf[10] = 0; 
}

else{
    icpf[10] = 11-resto; 

}

for(int i = 0 ; i <= 10 ; i++){
    printf("%d",icpf[i]); 
}

printf("\n"); 

return 0; 

}


