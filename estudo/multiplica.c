#include <stdio.h>

int main()
{

	int num1, num2, resultado;

	//SOLICITAR E GRAVAR O PRIMEIRO NÚMERO
	printf("Por favor, digite o primeiro número para multiplicar: ");
	scanf("%d", &num1);

	//SOLICITAR E GRAVAR O SEGUNDO NÚMERO
	printf("Agora digite o segundo número: ");
	scanf("%d", &num2);

	//RESULTADO DA MULTIPLICAÇÃO
	resultado = num1 * num2; 

	//EXIBIR RESULTADO
	printf("A multiplicação é igual a %d\n", resultado);

	return 0;

}
