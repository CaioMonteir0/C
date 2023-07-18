/*Criar e manipular FUNÇÕES: média de uma matriz*/
 
#include <stdio.h>
#include <locale.h>

float media_matriz(int); 

int main(){
	setlocale(LC_ALL,"Portuguese");
     
     int dim_matriz=0;
     float media_dados=0;
     
     printf("\n digite a dimensão da matriz:");
     scanf("%d",&dim_matriz);
     
     if (dim_matriz>10) dim_matriz=10;
     media_dados=media_matriz(dim_matriz);
     printf("\n media dados matriz: %f",media_dados);
     getch();
}

float media_matriz(int dim)
{
   int i,j;
   float media=0;
   float matriz[dim][dim];
    
    printf("\t Digite a matriz M[%d][%d] \n",dim,dim);
	
		for(i=0; i<dim; i++){
                 for(j=0; j<dim; j++){
		                  printf("\t\n M[%d][%d]=",i+1 ,j+1);
                          scanf("%f",&matriz[i][j]);
                                      }
	                         }      
        for(i=0; i<dim; i++){
                 for(j=0; j<dim; j++){
		                  printf(" M[%d][%d]= %f",i+1,j+1,matriz[i][j]);
                          if (j==dim-1) { printf("\n");};
                            }
                                      }     
                                      
        for(i=0; i<dim; i++){
                 for(j=0; j<dim; j++){
		                  media+=matriz[i][j]/(dim*dim);                                      
                                     }
                            }
   return media;
}
                      
  
