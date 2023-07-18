// *uso de matrizes:  matriz transposta*

#include <stdio.h>
#include <locale.h>

void main(){
     
    setlocale(LC_ALL, "Portuguese");  
        
        float A[50][50];                /* receber uma matriz até 50x50 */
        int l, c, diml, dimc;           /* contadores para os índices   */

        printf("Digite o Número de Linha da Matriz: \n");
        scanf("%d",&diml);
        printf("Digite o Número de Coluna da Matriz: \n");
        scanf("%d",&dimc);
        
        printf("Receber Matriz A %d x %d =  \n",diml,dimc);
        for(l=1; l<=diml; l++) {
                 for(c=1;c<=dimc;c++) {
                                   printf("Digite o elemento A[%d][%d]:", l, c);
                                   scanf("%f", &A[l][c]);//receber os dados da matriz
                                    }
                             }
                                
        printf("Matriz A %d x %d = \n",diml,dimc);
        for(l=1; l<=diml; l++) {
                 for(c=1;c<=dimc;c++) {
                                   printf(" %.2f", A[l][c]);//Imprimir na tela a Matriz Recebida
                                   if(c==dimc){printf("\n");}
                                       }
                                }
                            
        printf("Matriz AT %d x %d= \n",dimc,diml);
        for(l=1; l<=dimc; l++) {
                 for(c=1;c<=diml;c++) {
                                   printf(" %.2f", A[c][l]);//Imprimir Matriz Transposta na tela 
                                   if(c==diml){printf("\n");}
                                      }
                               }
    getch();
}

