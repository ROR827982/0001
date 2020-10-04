#include <string>
using std::string;

#ifndef FAMILIA_H
#define FAMILIA_H

class familia
{
	public:
		familia (string = "");
		void setFamiDado (string);
		void setFami ();
		void print () const;
	private:
		string famiDado;
};

#endif

