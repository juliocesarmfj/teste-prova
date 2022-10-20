#include <stdio.h>
#include <math.h>
int main(){
    int questao,ano;
    float catetoO,catetoA,hipotenusa,seno;
	char nome[20];
	printf("Nome da discplina: Algoritmo e programacao\nProfessora: Joyce Siqueira\nNome do aluno: Julio Cesar Silva de Moura Fe\nMatricula:UC33300535\nCurso: ADS\nLink do repositorio: https://github.com/juliocesarmfj/teste-prova\nFoi utilizado o Dev c++");
	
	printf("\n\nDigite qual questao que deseja consultar (1 ou 2):");
	scanf("%i",&questao);
	
	
	switch(questao){
		default: printf("Numero invalido"); break;
		case 1:
			printf("questao A\n");
	
	printf("digite o valor do cateto oposto: ");
	scanf("%f",&catetoO);
	
	printf("digite o valor do cateto adjacente: ");
	scanf("%f",&catetoA);
	
	hipotenusa= sqrt((catetoO*catetoO)+(catetoA*catetoA));
	seno=catetoO/hipotenusa;
	
	
	printf("Hipotenusa: %.3f\n",hipotenusa);
	printf("seno: %.3f",seno);
	break;


     case 2:
     	printf("questao B\n");
     	printf("Qual o seu nome?");
	scanf("%s",&nome);
	
	printf("Digite o ano: ");
	scanf("%i",&ano);
	
	printf("%s, ",nome);
	if(ano%4==0 && ano%100!=0){
	  printf("%i e um ano bissexto",ano);
			
	}
	
	else if(ano%4==0 && ano%100==0 && ano%400==0){
		
	printf("%i e um ano bissexto",ano);

	
	}
	
	else{
	printf("%i nao e um ano bissexto",ano);
		
	}

}
	

 
}

