/******************************************************************************
***********************Média do IFCE Campus Maracanaú *************************
*******************************************************************************
Aluno: Caio Henrique Araújo Monteiro
Curso: Engenharia de Controle e Automação
*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,af,mf,mp,presen;
	
	
	
	printf("Bem-vindo ao sistema de cálculo de notas do IFCE !\n");
	
	printf("Digite o valor de sua N1: ");
		scanf("%f",&n1);
	
	printf("Digite o valor de sua N2: ");
		scanf("%f",&n2);
		
		mp=((2*n1)+(3*n2))/5;
			
	printf("A média parcial é: %0.1f \n",mp);
	
	printf("Digite a sua taxa de presença no semestre: ");
		scanf("%f",&presen);
		
	printf("Taxa de presença = %.2f%% \n",presen);
	
	
	
	if(mp>=7&presen>=75){
		printf("Aprovado");exit(0);} else if(mp>=3&mp<=6.9&presen>=75){
			printf("Terá o direito de fazer AF \n");
				printf("Digite sua nota da AF: ");
				scanf("%f",&af);
				
			} else {
				printf("Reprovado");
				
					exit(0); }
			
		mf=(mp+af)/2;
		
		printf("Sua média final é: %0.1f \n",mf);
		
			if(mf>=5){
				printf("Aprovado");} else{
					printf("Reprovado");}}
	
	

	

