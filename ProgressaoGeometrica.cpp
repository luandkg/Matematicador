#include "ProgressaoGeometrica.h"

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

std::string ProgressaoGeometrica::getTipo() const {

	if (m_Razao == 0) {
		return std::string("Constante");
	} else if (m_Razao > 0 && m_PrimeiroTermo>0) {
		return std::string("Crescente");
	} else if (m_Razao > 0 && m_PrimeiroTermo<0) {
		return std::string("Crescente");
	} else if (m_Razao < 0 && m_PrimeiroTermo>0) {
		return std::string("Alternada");
	} else if (m_Razao < 0 && m_PrimeiroTermo<0) {
		return std::string("Alternada");
	} else {
		return std::string("DESCONHECIDA");
	}

}

int ProgressaoGeometrica::getIndice() const {
	return this->m_indice;
}

float ProgressaoGeometrica::getValor() const {
	return this->getTermo(m_indice);
}

bool ProgressaoGeometrica::ExisteAnterior() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

bool ProgressaoGeometrica::ExisteProximo() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

void ProgressaoGeometrica::Avancar() {
	if (m_indice < 1) {

	} else {
		m_indice +=1;
	}
}

void ProgressaoGeometrica::Voltar() {
	if (m_indice <= 1) {

	} else {
		m_indice -=1;
	}
}

void ProgressaoGeometrica::Iniciar(){
	m_indice = 1;
}

void ProgressaoGeometrica::IrPara(int Termo){
	if (Termo > 0){
		m_indice = Termo;
	} else{
		m_indice = 1;
	}
}


