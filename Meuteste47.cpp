#include<stdio.h> // chama biblioteca

int main(){ // meu main
	
	char nome[50] = ""; // var tipo str
	
	float nota1 = 0.0, nota2 = 0.0, media = 0.0; 
	
	
	printf("Digite seu nome:\n");
	scanf("%c", &nome);
	
	printf("Digite sua primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota:\n");
	scanf("%f", &nota2);
	
	media = nota1 / nota2;
	
	printf("Os resultados sao:\n");
	printf("Nome:%c.\n", nome);
	printf("Resultado:.%2f.\n", media);
	
	
}
