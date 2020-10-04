#include <iostream>
using std::cout;

#include "trabalhador.h"
#include "info.h"

trabalhador::trabalhador (const info &infoNome, const info &infoCPF,
const familia &famiMae, const familia &famiPai)
:funcionarioNome (infoNome),
funcionarioCPF (infoCPF),
mae (famiMae),
pai (famiPai)
{
	cout << "\nDados do funcionario: \n";
	print();
}

void trabalhador::print() const
{
	funcionarioNome.print();
	funcionarioCPF.print();
	mae.print();
	pai.print();
}

