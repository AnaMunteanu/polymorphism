/*
 * Spectacol.cpp
 *
 *  Created on: May 6, 2019
 *      Author: user
 */
#include "Spectacol.h"
#include "Exception.h"


Spectacol::Spectacol(){
	//constr without par
	this->data="";
	this->loc="";
	this->nrDisponibile=0;
	this->nrVandute=0;

}

Spectacol::Spectacol(string d, string l, int disponibile, int v){
	//constr with par
	char data[20];
	strcpy(data, d.c_str());
	char* number=strtok(data, ".");
	if(atoi(number)<1 || atoi(number)>31)
		throw Exception("data invalida, ziua trebuie sa fie intre 1 si 31...");
	number=strtok( NULL, ".");
	if(atoi(number)<1 || atoi(number)>12)
		throw Exception("data invalida, luna trebuie sa fie intre 1 si 12...");
	number=strtok( NULL, ".");
	if(atoi(number)<2019)
		throw Exception("data invalida, anul trebuie sa fie >=2019...");

	this->data=d;
	this->loc=l;

	if(disponibile<= 0)
		throw Exception("nr de locuri disponibile trebuie sa fie pozitiv...");
	this->nrDisponibile=disponibile;

	if(v<= 0)
		throw Exception("nr de locuri vandute trebuie sa fie pozitiv...");
	this->nrVandute=v;
}

Spectacol::Spectacol( const Spectacol &s){
	//copy constr

	this->data=s.data;
	this->loc=s.loc;
	this->nrDisponibile=s.nrDisponibile;
	this->nrVandute=s.nrVandute;

}

Spectacol& Spectacol::operator=(const Spectacol &s){
	//operator de atribuire
	if(this!=&s){
		this->data=s.data;
		this->loc=s.loc;
		this->nrDisponibile=s.nrDisponibile;
		this->nrVandute=s.nrVandute;
	}
	return *this;
}

Spectacol::~Spectacol(){
	//destructor
	this->data.clear();
	this->loc.clear();
}

string Spectacol::getData(){

	return this->data;
}

string Spectacol::getLoc(){

	return this->loc;
}

int Spectacol::getNrDisponibile(){

	return this->nrDisponibile;
}

int Spectacol::getNrVandute(){

	return this->nrVandute;
}

void Spectacol::setData(string d){

	this->data=d;
}

void Spectacol::setLoc(string l){

	this->loc=l;
}

void Spectacol::setNrDisponibile(int nr){

	this->nrDisponibile=nr;
}

void Spectacol::setNrVandute(int nr){

	this->nrVandute=nr;
}

bool Spectacol::operator==(const Spectacol &s){

	return(this->data==s.data && this->loc==s.loc && this->nrDisponibile==s.nrDisponibile && this->nrVandute==s.nrVandute);
}

Spectacol* Spectacol::clone(){
	Spectacol* newSpectacol = new Spectacol();
	newSpectacol->setData(this->data);
	newSpectacol->setLoc(this->loc);
	newSpectacol->setNrDisponibile(this->nrDisponibile);
	newSpectacol->setNrVandute(this->nrVandute);
	return newSpectacol;
}
