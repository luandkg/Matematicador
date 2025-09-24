
// DESENVOLVEDOR : LUAN ALVES FREITAS
// DATA			 : 2019 12 25

#ifndef PROGESSAO_GEOMETRICA
#define PROGESSAO_GEOMETRICA

#include <string>
#include <iostream>

#include "Progressao.h"

class ProgressaoGeometrica : public Progressao {

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
	float getPrimeiroTermo()  const override;
	float getRazao() const  override;

	std::string getTipo() const  override;

	float getTermo(int n) const  override;
	float getSomatorio(int n) const  override;

	// ITERADOR
	int getIndice() const  override;
	float getValor() const  override;

	bool existeAnterior()  override;
	bool existeProximo()  override;

	void iniciar()  override;
	void avancar()  override;
	void voltar()  override;
	void irPara(int Termo)  override;


	enum Tipo {CONSTANTE, CRESCENTE, ALTERNADA};

	Tipo classificar() const;
};

#endif



