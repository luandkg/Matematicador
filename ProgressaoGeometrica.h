
// DESENVOLVEDOR : LUAN ALVES FREITAS
// DATA			 : 2019 12 25

#ifndef PROGESSAO_GEOMETRICA
#define PROGESSAO_GEOMETRICA

#include <string>
#include <iostream>

class ProgressaoGeometrica {

private:
	float m_PrimeiroTermo = 0;
	float m_Razao = 0;

	int m_indice = 0;
	int m_atual = 0;

public:
	// CONSTRUTOR E DESTRUTOR
	ProgressaoGeometrica(float PrimeiroTermo, float Razao);
	~ProgressaoGeometrica();

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

	bool existeAnterior();
	bool existeProximo();

	void iniciar();
	void avancar();
	void voltar();
	void irPara(int Termo);

};

#endif



