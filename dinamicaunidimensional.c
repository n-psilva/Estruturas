#include <stdio.h>
#include <stdlib.h>
void ordena(int p, float *setor)
{
     int i, troca=1, f;
     float auxsal, auxsetor;
     f=p-1;
     while(troca==1)
     {
           f=f-1;
           troca=0;
           for(i=0;i<=f;i++)
           {
               if(setor[i*2+0] > setor[(i+1)*2+0])
               {
                   auxsetor= setor[i*2+0];
                   auxsal=setor[i*2+1];
                   setor[i*2+0]= setor[(i+1)*2+0];
                   setor[i*2+1]= setor[(i+1)*2+1];
                   setor[(i+1)*2+0]=auxsetor;
                   setor[(i+1)*2+1]=auxsal;
                   troca=1;
               }
           }
     }
}
  
int main()
{
    float *setor;
    int p,i,j;
    
    printf("entre com a qtd de setores:");
    scanf("%d",&p);
    
    setor=(float*) malloc(p*2*sizeof(float));// o 2 esta fixo pq sao 2 colunas , senao seria n colunas
    if(setor == NULL)
    {
             printf("memoria insuficiente!");
             return 1;
    }
    printf("entreda tabela de salarios\n");
    
    for(i=0;i<p;i++)
        
        {
           printf("\nentre com o codigo do setor %d:", i+1);
           scanf("%f",&setor[i*2+0]);
           printf("\nentre com o salario do setor %5.2f:\n",setor[i*2+0]);
           scanf("%f",&setor[i*2+1]);
        }
    
    ordena(p,setor);
    
    printf("tabela ordenada por setor\n");
    
    for(i=0;i<p;i++)
        
        {
           printf("%5.2f",setor[i*2+0] );
           printf("%10.2f",setor[i*2+1]);
           printf("\n");
        }
            

        
   system("pause");
   return 0;
   
}
