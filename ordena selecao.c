#include<stdio.h>
#include<stdlib.h>


void ordena(int n, float *v)
{
	int i,j,selec,aux, f=n-1;
	
	for(i=0;i<=(f-1);i++)
	{
		selec=i;
		for(j=i+1;j<=f;j++)
		{
			if(v[j] < v[selec]) selec=j;
			
		}
		if(v[i] > v[selec])
		{
			aux=v[i];
			v[i]= v[selec];
			v[selec]= aux;
		}
	
	}
  
}     



int main( void) 

{ 
  int i, n, achou;
  float *v; 
  float proc; 

/* leitura do n�mero de valores */

  printf("\nEntre com o numero de valores do vetor: ");
  scanf("%d", &n);

/* aloca��o din�mica */
 
  v = (float*) malloc(n*sizeof(float)); 
  if (v==NULL) 
	  { 
	    printf("Memoria insuficiente.\n"); 
	    return 1; 
	  }
	  

/* leitura dos valores */

  printf("\nEntre com os valores: "); 
  for (i = 0; i < n; i++) scanf("%f", &v[i]);

/*Ordena��o*/
  
  ordena(n,v);
  printf("\nEstes sao os valores ordenados: ");
  for (i = 0; i < n; i++) printf("  %f",v[i]);



/*Libera��o da mem�ria*/
  free(v);

  printf("\n");
  system ("PAUSE"); 
  return 0; 	  
}
