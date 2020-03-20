/*
 * Film.h
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#ifndef FILM_H_
#define FILM_H_

#include "Spectacol.h"
#include<vector>
using namespace std;

class Film:public Spectacol{
private:
	string nume;
	string actori;
public:
	Film();
	~Film();
	Film(string, string, int, int, string, string);
	Film(const Film &);
	Film& operator=(const Film&);
	string getNume();
	string getActori();
	void setNume(string);
	void setActori(string);
	friend ostream& operator<<(ostream&, const Film&);


};



#endif /* FILM_H_ */
