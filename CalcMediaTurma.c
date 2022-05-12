#include <stdio.h>
int main(){
 float notas[3][3], soma=0, media;
 int t,a;
  for(t=0;t<3;t++){
   for(a=0;a<3;a++){
    printf("Turma %i, Aluno %i: \n", t+1, a+1);
    scanf("%f", &notas[t][a]);
     soma=soma+notas[t][a];
   }
 media=soma/3;
    printf("\nMedia da Turma %i:\n %.1f", t+1, media);
    
  }
  

}
