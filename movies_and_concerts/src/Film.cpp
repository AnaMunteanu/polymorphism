/*
 * Film.cpp
 *
 *  Created on: May 6, 2019
 *      Author: user
 */
#include "Film.h"
#include<iostream>
using namespace std;

Film::Film():Spectacol(){

	this->nume="";
	this->actori="";

}

Film::~Film(){

	this->nume.clear();
	this->actori.clear();
}

Film::Film(string data, string loc, int disp, int vandute, string nume, string act):Spectacol(data, loc, disp, vandute){

	this->nume=nume;
	this->actori=act;
}

Film::Film(const Film &f){
	//copy constr
	this->data=f.data;
	this->loc=f.loc;
	this->nrDisponibile=f.nrDisponibile;
	this->nrVandute=f.nrVandute;
	this->nume=f.nume;
	this->actori=f.actori;

}

Film& Film::operator=(const Film &f){\
	if(this!=&f){
			this->data=f.data;
			this->loc=f.loc;
			this->nrDisponibile=f.nrDisponibile;
			this->nrVandute=f.nrVandute;
			this->actori.clear();
			this->actori=f.actori;
			this->nume=f.nume;
		}
		return *this;
}

string Film::getNume(){

	return this->nume;
}

string Film::getActori(){

	return this->actori;
}

void Film::setNume(string n){

	this->nume=n;
}

void Film::setActori(string act){

	this->actori.clear();
	this->actori=act;
}

ostream& operator<<(ostream& os, const Film& a){
	os<<"Titlu film: "<<a.nume<<" Data: "<<a.data<<" Locul: "<<a.loc<<" Nr de bilete disponibile: "<<a.nrDisponibile<<" Nr de bilete vandute: "<<a.nrVandute<<" Actori: "<<a.actori<<endl;
	return os;
}


