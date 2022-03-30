#include <stdio.h>
#include <stdlib.h>
#include "descricaocurso.h"
#include "unidade.h"

void gravar(){
    
    FILE *arquivo;

    arquivo = fopen("dados.txt","w");

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa
    }

     descricao_curso ncurso, *pncurso; 
     unidade nunidade, *pnunidade; 

     printf("Entre com o nome do curso:\n");
      fgets(pncurso->nome,60,stdin);
      printf("Entre com a descrição do curso:\n");
      fgets(pncurso->descricaoCurso,300,stdin);
      printf("Entre com a carga hoŕaria do curso:\n");
      scanf("%d", &pncurso->cargaHoraria);
      printf("Entre com a data de inicio do curso:\n");
      fgets(pncurso->dataInicio,15,stdin);
      printf("Entre com a data de término do curso");
      fgets(pncurso->dataTermino,15,stdin);
      printf("Entre com o preço do curso:\n");
      scanf("%f", &pncurso->preco); 
      printf("Entre com o nome da unidade:\n");
      fgets(pnunidade->unidade,250,stdin); 
      printf("Entre com a localização:\n");
      fgets(pnunidade->locaizacao,200,stdin);
      printf("Entre com o horário da unidade:\n");
      fgets(pnunidade->horario,50,stdin);
      printf("Entre com o telefone:\n");
      fgets(pnunidade->telefone,15,stdin);

      
    fprintf(arquivo,pnunidade->unidade);
    fprintf(arquivo,pnunidade->telefone);
    
    
    fclose(arquivo);






}