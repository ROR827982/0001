#include <string>
using std::string;

#ifndef INFO_H
#define INFO_H

class info
{
	public:
		info (string = "");
		void setInfoDado (string);
		void setInfo ();
		void print () const;
	private:
		string infoDado;
};

#endif
