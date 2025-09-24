#include "../progressao/ProgressaoGeometrica.h"

ProgressaoGeometrica::ProgressaoGeometrica(float PrimeiroTermo, float Razao) {
	m_PrimeiroTermo = PrimeiroTermo;
	m_Razao = Razao;
	m_indice = 1;
}

ProgressaoGeometrica::~ProgressaoGeometrica() {

}

float ProgressaoGeometrica::getPrimeiroTermo() const {
	return m_PrimeiroTermo;
}

float ProgressaoGeometrica::getRazao() const {
	return m_Razao;
}

float ProgressaoGeometrica::getTermo(int n) const {
	float potencia = 0;
	if (n>1){
		potencia = m_Razao;
			n-=1;

			while(n>1){
				potencia = potencia*m_Razao;
				n-=1;
			}
	}



	return (m_PrimeiroTermo) + (potencia);
}

float ProgressaoGeometrica::getSomatorio(int n) const {
	return ((m_PrimeiroTermo + this->getTermo(n)) * n) / 2;
}

ProgressaoGeometrica::Tipo ProgressaoGeometrica::classificar() const {

	if (m_Razao == 0) {
		return ProgressaoGeometrica::CONSTANTE;
	} else if (m_Razao > 0 && m_PrimeiroTermo>0) {
		return ProgressaoGeometrica::CRESCENTE;
	} else if (m_Razao > 0 && m_PrimeiroTermo<0) {
		return ProgressaoGeometrica::CRESCENTE;
	} else if (m_Razao < 0 && m_PrimeiroTermo>0) {
		return ProgressaoGeometrica::ALTERNADA;
	} else if (m_Razao < 0 && m_PrimeiroTermo<0) {
		return ProgressaoGeometrica::ALTERNADA;
	} else {
		return {};
	}

}

std::string ProgressaoGeometrica::getTipo() const {
	switch (classificar()) {
		case ProgressaoGeometrica::CONSTANTE: {
			return std::string("Constante");
		}
			break;
		case ProgressaoGeometrica::CRESCENTE: {
			return std::string("Crescente");
		}
			break;
		case ProgressaoGeometrica::ALTERNADA: {
			return std::string("Alternada");
		}
			break;
	}
}


int ProgressaoGeometrica::getIndice() const {
	return this->m_indice;
}

float ProgressaoGeometrica::getValor() const {
	return this->getTermo(m_indice);
}

bool ProgressaoGeometrica::existeAnterior() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

bool ProgressaoGeometrica::existeProximo() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

void ProgressaoGeometrica::avancar() {
	if (m_indice < 1) {

	} else {
		m_indice +=1;
	}
}

void ProgressaoGeometrica::voltar() {
	if (m_indice <= 1) {

	} else {
		m_indice -=1;
	}
}

void ProgressaoGeometrica::iniciar(){
	m_indice = 1;
}

void ProgressaoGeometrica::irPara(int Termo){
	if (Termo > 0){
		m_indice = Termo;
	} else{
		m_indice = 1;
	}
}


