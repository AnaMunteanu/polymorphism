/*
 * Artist.cpp
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#include"Artist.h"
using namespace std;
#include<iostream>

Artist::Artist():Spectacol(){

	this->name="";
}

Artist::~Artist(){

	this->name.clear();
}

Artist::Artist(string data, string loc, int disp, int vand, string name):Spectacol(data, loc, disp, vand){

	this->name=name;
}

Artist::Artist(const Artist& a):Spectacol(a){

	this->name=a.name;

}

Artist& Artist::operator=(const Artist& a){
	if (this != &a){
				Spectacol::operator=(a);
				this->name = a.name;
			}
			return *this;
}

string Artist::getName(){

	return this->name;
}

void Artist::setName(string n){

	this->name=n;

}

ostream& operator<<(ostream& os, const Artist& a){
	os<<"Nume artist: "<<a.name<<" Data: "<<a.data<<" Locul: "<<a.loc<<" Nr de bilete disponibile: "<<a.nrDisponibile<<" Nr de bilete vandute: "<<a.nrVandute<<endl;
	return os;
}



