# 📜 Matematicador

## 🚀 Sobre o Projeto

Matematicador é uma biblioteca C++ que oferece uma solução orientada a objetos para o cálculo de progressões matemáticas. O projeto utiliza uma classe virtual Progressao como base para implementar as classes concretas ProgressaoAritmetica (PA) e ProgressaoGeometrica (PG). A principal característica é a herança e o polimorfismo, permitindo que o código seja reutilizável e extensível para outros tipos de progressões.

O projeto foi desenvolvido para fins educacionais e práticos, servindo como uma ferramenta para explorar os conceitos de programação orientada a objetos em C++. Além dos métodos de cálculo, a classe Progressao implementa um padrão de iterador, permitindo a navegação sequencial pelos termos da progressão.

## 💻 Estrutura do Código

A arquitetura do projeto é centrada na classe abstrata Progressao, que define a interface comum para todas as progressões.

    Progressao: Uma classe base virtual (abstrata) que define os métodos comuns para qualquer progressão, como getPrimeiroTermo(), getRazao(), getTermo(n), getSomatorio(n) e os métodos do iterador (avancar(), voltar(), etc.).

    ProgressaoAritmetica: Classe que herda de Progressao e implementa os métodos específicos para progressões aritméticas.

    ProgressaoGeometrica: Classe que herda de Progressao e implementa os métodos específicos para progressões geométricas.

```Diagrama de Classes

Snippet de código

classDiagram
class Progressao {
<<abstract>>
+getPrimeiroTermo(): float
+getRazao(): float
+getTipo(): string
+getTermo(n): float
+getSomatorio(n): float
+getIndice(): int
+getValor(): float
+existeAnterior(): bool
+existeProximo(): bool
+iniciar(): void
+avancar(): void
+voltar(): void
+irPara(n): void
}

    class ProgressaoAritmetica {
        +getTermo(n): float
        +getSomatorio(n): float
    }

    class ProgressaoGeometrica {
        +getTermo(n): float
        +getSomatorio(n): float
    }

    Progressao <|-- ProgressaoAritmetica
    Progressao <|-- ProgressaoGeometrica

```

## 🛠️ Como Usar

Para utilizar a biblioteca, basta incluir os arquivos de cabeçalho (.h) em seu projeto C++ e criar instâncias de ProgressaoAritmetica ou ProgressaoGeometrica.

Exemplo de Uso

```
C++

#include <iostream>
#include "ProgressaoAritmetica.h"
#include "ProgressaoGeometrica.h"

int main() {
// Exemplo com Progressão Aritmética (PA)
ProgressaoAritmetica pa(2.0, 3.0); // Primeiro termo: 2, Razão: 3

    std::cout << "--- Progressão Aritmética ---" << std::endl;
    std::cout << "Termo 5: " << pa.getTermo(5) << std::endl; // Saída: 14
    std::cout << "Soma dos primeiros 5 termos: " << pa.getSomatorio(5) << std::endl; // Saída: 40

    // Navegando com o iterador
    std::cout << "Iterando nos primeiros 3 termos:" << std::endl;
    pa.iniciar();
    while (pa.getIndice() <= 3 && pa.existeProximo()) {
        std::cout << "Termo " << pa.getIndice() << ": " << pa.getValor() << std::endl;
        pa.avancar();
    }
    // Saída:
    // Termo 1: 2
    // Termo 2: 5
    // Termo 3: 8

    std::cout << "\n--- Progressão Geométrica ---" << std::endl;
    // Exemplo com Progressão Geométrica (PG)
    ProgressaoGeometrica pg(3.0, 2.0); // Primeiro termo: 3, Razão: 2

    std::cout << "Termo 4: " << pg.getTermo(4) << std::endl; // Saída: 24
    std::cout << "Soma dos primeiros 4 termos: " << pg.getSomatorio(4) << std::endl; // Saída: 45

    return 0;
}
```

## 🤝 Contribuições

Contribuições são bem-vindas! Se você encontrou um bug, tem uma sugestão de melhoria ou quer adicionar uma nova funcionalidade, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## 📄 Licença

Este projeto está sob a licença MIT.

## 🧑‍💻 Autor

    Luan - Desenvolvedor Principal