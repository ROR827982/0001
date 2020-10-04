#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include "familia.h"

familia::familia (string info)
{
	setFamiDado (info);
}

void familia::setFamiDado (string info)
{
	famiDado = info;
	setFami();
}

void familia::setFami ()
{
	string nome;
	getline (cin, nome);
	famiDado = nome;
}

void familia::print () const
{
	cout << famiDado << "\n";
}

