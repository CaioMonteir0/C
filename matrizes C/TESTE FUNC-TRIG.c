#include <stdio.h>
#include <locale.h>
#include <math.h>

float seno(float); 
float cosseno(float); 
float tangente(float); 
 
 
 void main()
{    
    setlocale(LC_ALL, "Portuguese");  
  
    float theta=0, valor_seno=0, valor_cosseno=0,     valor_tangente=0;
    
    printf("\t Digite o ângulo Desejado: ");
    scanf("%f",&theta);
    valor_seno=seno(theta); 
    valor_cosseno=cosseno(theta); 
    valor_tangente=tangente(theta);       
    printf("\t seno( %.2f )= %.2f \n",theta, valor_seno);  
    printf("\t cosseno( %.2f )= %.2f \n",theta, valor_cosseno);   
    printf("\t tangente( %.2f )= %.2f \n",theta, valor_tangente);   
    getch();
}

float seno(float theta){
      
      float senotheta=0, PI=3.14, theta_rad=0;
      
      theta_rad=theta*PI/180;
      
      senotheta=theta_rad-pow(theta_rad,3)/(3*2*1)+pow(theta_rad,5)/(5*4*3*2*1)-pow(theta_rad,7)/(7*6*5*4*3*2*1)+pow(theta_rad,9)/(9*8*7*6*5*4*3*2*1);
          
      return  senotheta;
      }
      
float cosseno(float theta){
      
      float cossenotheta=0, PI=3.14, theta_rad=0;
      
      theta_rad=theta*PI/180;
      
      cossenotheta=1-pow(theta_rad,2)/(2*1)+pow(theta_rad,4)/(4*3*2*1)-pow(theta_rad,6)/(6*5*4*3*2*1)+pow(theta_rad,8)/(8*7*6*5*4*3*2*1);
          
      return  cossenotheta;
      }
      
float tangente(float theta){
      
      float tangentetheta=0;
      
      tangentetheta=seno(theta)/cosseno(theta);
      
          
      return  tangentetheta;
      }

