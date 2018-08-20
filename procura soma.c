#include<stdio.h>
#include<stdlib.h>
int procura(float *v, int n, float proc)
{
     int pos =0;
     int k;
     int a=0, b=n-1;
     while(a<=b && pos==0)
     {
        k=(a+b)/2;
        if(v[k] == proc)
        {  pos=k+1;
           return pos;
        }
        else
        {
            if(proc>v[k])
            a=k+1;
            else
            b=k-1;
        }
     }
     return pos;
}

/*int soma(float *v, int n)
{
   if(n<1) return 0;
   else
   return v[n-1] + soma(v,n-1);
}
*/
float media(float *v, int n, int div)
{
      if(n<1) return 0;
      else
      return (v[n-1]/div) + media(v,n-1,div);
}

int main()
{
          int i, n,achou;
          float *v;
          float proc;
          //leitura do num de valores
          printf("\nEntre com o numero de valores do vetor: ");
          scanf("%d",&n);
          
          //alocação dinâmica
          v=(float*)malloc(n*sizeof(float));
          if(v==NULL)
          {
                  printf("Memoria insuficiente.\n");
                  return 1;
          }
          
          //leitura dos valores
          printf("\nEntre com os valores: ");
          for(i=0; i<n; i++)
          scanf("%f",&v[i]);
          
          printf("\nCalcula a media:");
          printf("\n A media e: %f",media(v,n,n));// posso utilizar soma(v,n)/(float)n
          
          printf("\nEntre com o valor que deseja saber a posicao no vetor: ");
          scanf("%f",&proc);
          
          achou=procura(v,n,proc);
          if(achou==0)
          {
                      printf("\nO numero digitado nao existe no vetor!");
          }
          else
          {
                      printf("\nO numero esta na posicao %d",achou);
          }
          free(v);// libera a area de memoria antes de terminar o programa
          
          system("pause");
          return 0;
}   
