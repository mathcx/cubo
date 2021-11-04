/*
Implemente um sistema utilizando FUNCAO que leia
um valor e apresente para o usuario o valor do
CUBO do valor digitado.
compartilhar trello:: utnairo@gmail.com
*/

#include <stdio.h>

void CUBO(int a){

int resultado = (a * a * a);
printf("O cubo do valor %d eh %d", a, resultado);
}

int main()

{

int valor01;

printf("Digite um valor: \n");
scanf("%d", &valor01);

CUBO(valor01);


	return 0;
}

