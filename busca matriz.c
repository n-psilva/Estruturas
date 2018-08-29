#include<stdio.h>
#include<stdlib.h>

void busca(int m[][3], int num)
{ int i,j,achou=0;
   for(i=0;i<3;i++)
   
      for(j=0;j<3;j++)
      {
        
        if(m[i][j] == num)
        {
           printf("%d,%d",i,j);
            achou=1;
         }
      
      }
   if(achou==0)    
   printf("\nnao achou");  
}

int main()
{
    int i,j,num,n=3;
    int m[3][3];
    
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     {
       printf("\nentre com o elemento (%d,%d): ", i,j);
       scanf("%d",&m[i][j]);
     }
     
     printf("\nesta e a matriz lida\n");
     
     for(i=0;i<n;i++)
     {  for(j=0;j<n;j++)
       {
          printf("%6d",m[i][j]);
       }
      printf("\n");
      
     }
     
     printf("\nentre com o numero de busca:");
     scanf("%d",&num);
     
     busca(m,num);
     printf("\n");
     
     
     system("pause");
     return 0; 
    
}
