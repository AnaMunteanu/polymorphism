/*
 * Spectacol.h
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#ifndef SPECTACOL_H_
#define SPECTACOL_H_
#include <string>
#include <cstring>
using namespace std;

class Spectacol{
protected:
	string data;
	string loc;
	int nrDisponibile;
	int nrVandute;
public:
	Spectacol();
	Spectacol(string, string, int, int);
	Spectacol( const Spectacol &s);
	virtual Spectacol& operator=(const Spectacol &s);
	bool operator==(const Spectacol &s);
	virtual ~Spectacol();
	virtual Spectacol* clone();
	string getData();
	string getLoc();
	int getNrDisponibile();
	int getNrVandute();
	void setData(string);
	void setLoc(string);
	void setNrDisponibile(int);
	void setNrVandute(int);




};



#endif /* SPECTACOL_H_ */
