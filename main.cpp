
#include <stdio.h>

#include "progressao/ProgressaoAritmetica.h"
#include "progressao/ProgressaoGeometrica.h"

void testar_progressao(Progressao *progressao);

int main() {

	ProgressaoAritmetica *pa = new ProgressaoAritmetica(12, 4);

	printf("\n ------ PROGRESSAO ARITMETICA ------\n");

	testar_progressao(pa);

	printf("\n\n");

	ProgressaoGeometrica *pg = new ProgressaoGeometrica(-3, 2);

	printf("\n ------ PROGRESSAO GEOMETRICA ------\n");

	testar_progressao(pg);

	printf("\n\n");



	return 0;
}

void testar_progressao(Progressao* progressao) {


	printf("\nPrimeiro Termo : %.2f", progressao->getPrimeiroTermo());
	printf("\nRazao : %.2f", progressao->getRazao());

	std::cout << std::endl << "Tipo : " << progressao->getTipo();

	printf("\n\n");

	for (int i = 1; i < 11; i++) {
		printf("\nTermo %d : %.2f", i, progressao->getTermo(i));

	}

	printf("\n\n");

	printf("\nSomatorio 10 : %.2f", progressao->getSomatorio(10));

	printf("\n\n");

	progressao->irPara(4);
	for (int i = 1; i < 11; i++) {
		printf("\nTermo %d : %.2f", progressao->getIndice(), progressao->getValor());
		progressao->avancar();
	}

	progressao->iniciar();
	printf("\nTermo %d : %.2f", progressao->getIndice(), progressao->getValor());


}
