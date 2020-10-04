#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include "info.h"

info::info (string info)
{
	setInfoDado (info);
}

void info::setInfoDado (string info)
{
	infoDado = info;
	setInfo();
}

void info::setInfo ()
{
	string nome;
	getline (cin, nome);
	infoDado = nome;
}

void info::print () const
{
	cout << infoDado << "\n";
}

