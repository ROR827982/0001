#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include "info.h"
#include "familia.h"

class trabalhador
{
	public:
		trabalhador (const info &, const info &, const familia &, const familia &);
		void print () const;
	private:
		const info funcionarioNome;
		const info funcionarioCPF;
		const familia mae;
		const familia pai;
};

#endif
