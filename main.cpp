
#include <stdio.h>

#include "progressao/ProgressaoAritmetica.h"
#include "progressao/ProgressaoGeometrica.h"

int main() {

	ProgressaoAritmetica *PA = new ProgressaoAritmetica(12, 4);

	printf("\n ------ PROGRESSAO ARITMETICA ------\n");

	printf("\nPrimeiro Termo : %.2f", PA->getPrimeiroTermo());
	printf("\nRazao : %.2f", PA->getRazao());

	std::cout << std::endl << "Tipo : " << PA->getTipo();

	printf("\n\n");

	for (int i = 1; i < 11; i++) {
		printf("\nTermo %d : %.2f", i, PA->getTermo(i));

	}

	printf("\n\n");

	printf("\nSomatorio 10 : %.2f", PA->getSomatorio(10));

	printf("\n\n");

	PA->irPara(4);
	for (int i = 1; i < 11; i++) {
			printf("\nTermo %d : %.2f", PA->getIndice(), PA->getValor());
			PA->avancar();
		}

	PA->iniciar();
	printf("\nTermo %d : %.2f", PA->getIndice(), PA->getValor());


	printf("\n\n");

	ProgressaoGeometrica *PG = new ProgressaoGeometrica(-3, 2);

	printf("\n ------ PROGRESSAO GEOMETRICA ------\n");

	printf("\nPrimeiro Termo : %.2f", PG->getPrimeiroTermo());
	printf("\nRazao : %.2f", PG->getRazao());

	std::cout << std::endl << "Tipo : " << PG->getTipo();

	printf("\n\n");

	for (int i = 1; i < 11; i++) {
		printf("\nTermo %d : %.2f", i, PG->getTermo(i));

	}

	printf("\n\n");

	printf("\nSomatorio 10 : %.2f", PG->getSomatorio(10));

	printf("\n\n");

	PA->irPara(4);
	for (int i = 1; i < 11; i++) {
			printf("\nTermo %d : %.2f", PG->getIndice(), PG->getValor());
			PG->avancar();
		}

	PG->iniciar();
	printf("\nTermo %d : %.2f", PG->getIndice(), PG->getValor());


	printf("\n\n");



	return 0;
}
