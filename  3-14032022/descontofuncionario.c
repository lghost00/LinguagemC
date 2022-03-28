// programa para calcular op desconto de um funcionãrio. 
//Onde o salário sendo maior que R$ 5000, terá um desconto de 5%. 
//Caso contrário não haverá desconto. 

#include <stdio.h> 


#define LIMITE 5000.00

int main(){
float salarioFuncionario; 
printf("Digite o salário do funcionário e tecle Enter\n");
scanf("%f" ,&salarioFuncionario); 
if(salarioFuncionario > LIMITE){
    printf("O desconto sera de %.2f\n", salarioFuncionario*5/100);
    printf("O valor final é %.2f\n",salarioFuncionario - (salarioFuncionario*0.05)); 
}
else{
    printf("Não há desconto");
}
return 0; 
}
