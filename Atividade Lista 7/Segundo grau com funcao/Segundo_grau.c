/* Le 3 numeros correspondendo aos coeficientes da
	equacao 2grau e calcula as raizes da equacao */
#include <stdio.h>
#include <math.h>

//funcao retorna delta
float calculaDelta(float a, float b, float c) {
	return pow(b,2) - (4 * a * c);
}

//funcao raiz x1
float calculaX1 (float a, float b, float c, float delta) {
	return (-b + sqrt(delta)) / (2 * a);
}

//funcao raiz x2
float calculaX2 (float a, float b, float c, float delta) {
	return (-b - sqrt(delta)) / (2 * a);
}


int main() {

	float a, b, c, delta;
	printf("Entre com os coeficientes da equacao (a, b, c): \n");
	scanf("%f%f%f", &a, &b, &c);

	//qdo n eh equacao de 2 grau
	if (a == 0)
		printf("Nao eh equacao de 2 grau\n");
	else {//b²-4ac
		delta = calculaDelta(a, b, c);
		if (delta < 0) {
			printf("Nao existem raizes reais\n");
		}
		else { //calcula raizes
			printf("x1 = %.2f\n", calculaX1(a, b, c, delta));
			printf("x2 = %.2f\n", calculaX2(a, b, c, delta));
		}
	}
	return 0;
}
