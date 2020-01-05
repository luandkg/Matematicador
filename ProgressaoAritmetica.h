
// DESENVOLVEDOR : LUAN ALVES FREITAS
// DATA			 : 2019 12 23

#ifndef PROGESSAO_ARITMETICA
#define PROGESSAO_ARITMETICA

#include <string>
#include <iostream>

class ProgressaoAritmetica {

private:
	float m_PrimeiroTermo = 0;
	float m_Razao = 0;

	int m_indice = 0;
	int m_atual = 0;

public:
	// CONSTRUTOR E DESTRUTOR
	ProgressaoAritmetica(float PrimeiroTermo, float Razao);
	~ProgressaoAritmetica();

public:
	// METODOS
	float getPrimeiroTermo() const;
	float getRazao() const;

	std::string getTipo() const;

	float getTermo(int n) const;
	float getSomatorio(int n) const;

	// ITERADOR
	int getIndice() const;
	float getValor() const;

	bool ExisteAnterior();
	bool ExisteProximo();

	void Iniciar();
	void Avancar();
	void Voltar();
	void IrPara(int Termo);

};

#endif



