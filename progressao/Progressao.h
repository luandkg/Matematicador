//
// Created by luan on 24/09/2025.
//

#ifndef MATEMATICADOR_PROGRESSAO_H
#define MATEMATICADOR_PROGRESSAO_H

class Progressao {
public:

    virtual float getPrimeiroTermo() const = 0;

    virtual float getRazao() const = 0;

    virtual std::string getTipo() const = 0;

    virtual float getTermo(int n) const = 0;

    virtual float getSomatorio(int n) const = 0;

    // ITERADOR
    virtual int getIndice() const = 0;

    virtual float getValor() const = 0;

    virtual bool existeAnterior() = 0;

    virtual bool existeProximo() = 0;

    virtual void iniciar() = 0;

    virtual void avancar() = 0;

    virtual void voltar() = 0;

    virtual void irPara(int Termo) = 0;
};
#endif //MATEMATICADOR_PROGRESSAO_H
