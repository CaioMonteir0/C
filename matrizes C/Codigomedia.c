/******************************************************************************
***********************M�dia do IFCE Campus Maracana� *************************
*******************************************************************************
Aluno: Caio Henrique Ara�jo Monteiro
Curso: Engenharia de Controle e Automa��o
*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,af,mf,mp,presen;
	
	
	
	printf("Bem-vindo ao sistema de c�lculo de notas do IFCE !\n");
	
	printf("Digite o valor de sua N1: ");
		scanf("%f",&n1);
	
	printf("Digite o valor de sua N2: ");
		scanf("%f",&n2);
		
		mp=((2*n1)+(3*n2))/5;
			
	printf("A m�dia parcial �: %0.1f \n",mp);
	
	printf("Digite a sua taxa de presen�a no semestre: ");
		scanf("%f",&presen);
		
	printf("Taxa de presen�a = %.2f%% \n",presen);
	
	
	
	if(mp>=7&presen>=75){
		printf("Aprovado");exit(0);} else if(mp>=3&mp<=6.9&presen>=75){
			printf("Ter� o direito de fazer AF \n");
				printf("Digite sua nota da AF: ");
				scanf("%f",&af);
				
			} else {
				printf("Reprovado");
				
					exit(0); }
			
		mf=(mp+af)/2;
		
		printf("Sua m�dia final �: %0.1f \n",mf);
		
			if(mf>=5){
				printf("Aprovado");} else{
					printf("Reprovado");}}
	
	

	

