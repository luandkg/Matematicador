#include "ProgressaoAritmetica.h"

ProgressaoAritmetica::ProgressaoAritmetica(float PrimeiroTermo, float Razao) {
	m_PrimeiroTermo = PrimeiroTermo;
	m_Razao = Razao;
	m_indice = 1;
}

ProgressaoAritmetica::~ProgressaoAritmetica() {

}

float ProgressaoAritmetica::getPrimeiroTermo() const {
	return m_PrimeiroTermo;
}

float ProgressaoAritmetica::getRazao() const {
	return m_Razao;
}

float ProgressaoAritmetica::getTermo(int n) const {
	return (m_PrimeiroTermo) + ((n - 1) * m_Razao);
}

float ProgressaoAritmetica::getSomatorio(int n) const {
	return ((m_PrimeiroTermo + this->getTermo(n)) * n) / 2;
}

std::string ProgressaoAritmetica::getTipo() const {

	if (m_Razao == 0) {
		return std::string("Constante");
	} else if (m_Razao > 0) {
		return std::string("Crescente");
	} else {
		return std::string("Decrescente");
	}

}

int ProgressaoAritmetica::getIndice() const {
	return this->m_indice;
}

float ProgressaoAritmetica::getValor() const {
	return this->getTermo(m_indice);
}

bool ProgressaoAritmetica::existeAnterior() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

bool ProgressaoAritmetica::existeProximo() {
	if (m_indice < 1) {
		return false;
	} else {
		return true;
	}
}

void ProgressaoAritmetica::avancar() {
	if (m_indice < 1) {

	} else {
		m_indice +=1;
	}
}

void ProgressaoAritmetica::voltar() {
	if (m_indice <= 1) {

	} else {
		m_indice -=1;
	}
}

void ProgressaoAritmetica::iniciar(){
	m_indice = 1;
}

void ProgressaoAritmetica::irPara(int Termo){
	if (Termo > 0){
		m_indice = Termo;
	} else{
		m_indice = 1;
	}
}


