/*
Implement a system using a function that reads
a value and presents the value of the
cube of the entered value.

Implemente um sistema utilizando FUNCAO que leia
um valor e apresente para o usuario o valor do
CUBO do valor digitado.
compartilhar trello:: utnairo@gmail.com

Author: Matheus Alexsander da Cruz
Date: 11/04/2021

*/
 
#include <stdio.h>

// Function called CUBO - Start
// Funcao chamada CUBO - Inicio

void CUBO(int a){ // Receber valor do usuario // Input user value

int resultado = (a * a * a); // Variavel e processamento // Variable and processing
printf("O cubo do valor %d eh %d", a, resultado); // Saida // Output
}

// Function called CUBO - End
// Funcao chamada CUBO - Fim


int main()

{

int valor01; // Declaracao de variavel // Variable declaration

printf("Digite um valor: \n"); // Entrada de valor // Value input
scanf("%d", &valor01); // Entrada de valor // Value input

CUBO(valor01); // Chamamento da funcao // Call function


	return 0;
}

