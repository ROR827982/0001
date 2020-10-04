#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream> 
using std::ofstream;

#include <cstdlib>
using std::exit;

#include "trabalhador.h"

int main()
{
	ofstream saidaArquivoCadastro( "cadastro.dat", ios::out );
	
	if ( !saidaArquivoCadastro ) // operador ! sobrecarregado
 {
 cerr << "Arquivo nao pode ser aberto" << endl;
 exit( 1 );
 }
 	
	cout << "Informe os dados: \n\n";
	cout << "Nome do funcionario: ";
	info i1;
	cout << "\nCPF: ";
	info i2;
	cout << "\nNome da mae: ";
	familia f1;
	cout << "\nNome do pai: ";
	familia f2;
	trabalhador t(i1, i2, f1, f2);
	
	return 0;
}
