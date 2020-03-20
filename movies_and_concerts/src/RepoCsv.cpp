/*
 * Repo.cpp
 *
 *  Created on: May 7, 2019
 *      Author: user
 */


#include<fstream>
#include<fstream>

#include "RepoCsv.h"
using namespace std;
#include<string.h>
#include"Film.h"
#include"Artist.h"

/*
Repo::Repo()
//constr without par
{
	this->a.reserve(10);
}

Repo::~Repo()
//destructor
{
	this->a.clear();

}

Repo::Repo(const vector<Spectacol*> vect)
//constr with par
{
	this->a = vect;
}

vector<Spectacol*> Repo::getAll()
{
	return this->a;
}

Repo::Repo(const Repo& r)
//copy constr
{
	this->a = r.a;

}
Repo& Repo::operator=(const Repo r)
{
	this->a = r.a;
	return *this;
}

bool Repo::operator==(const Repo &r){

	if(this->a.size()==r.a.size()){

		int ok=0;
		for(int i=0; i<r.a.size();i++)
			if(this->a[i]==r.a[i])
				ok++;
		if(ok==r.a.size())
			return true;
	}
	return false;

}

void Repo::addElem(Spectacol* s)
/*Descr:adauga un obiect de tip Spectacol* in vector
 * In:obiectul de tip Spectacol*
 * Out:-

{
	this->a.push_back(s);

}

int Repo::getSize()
//returneaza dimensiunea vectorului
{
	return this->a.size();
}

ostream& operator<<(ostream & os , const Repo& r)
{
	os << "Repo is: " << endl;

	for (int i = 0; i < r.a.size(); i++)
		os << r.a[i];

	return os;

}

void Repo::update(Spectacol* s, int pos){
	/*Descr:inlocuieste obiectul de pe pozitia pos cu s
	 * In:obiectul s, pozitia pos
	 * Out:-


	this->a[pos]=s;
}

*/


RepoCsv::RepoCsv(){
	size = 0;
	elements = new Spectacol*[10];
}


RepoCsv::RepoCsv(const RepoCsv &r){
	size = r.size;
	elements = new Spectacol*[r.size];
	for (int i = 0; i < r.size; i++)
		elements[i] = r.elements[i]->clone();
}


RepoCsv::~RepoCsv(){
	if (elements){
		delete[] elements;
		elements = NULL;
	}
}


void RepoCsv::loadFromFile(char* filename)
{
	ifstream f(filename);
	char* data = new char[15];
			char* loc = new char[10];
			char* disp = new char[3];
			char* vand = new char[3];
			char* n=new char[20];
			char* actori=new char[100];

			char* string = new char[100];
	while (!f.eof())
	{

		f.getline(string, 100);
		data = strtok(string, ",");
		loc=strtok(NULL, ",");
		disp=strtok(NULL, ",");
		vand=strtok(NULL, ",");
		n=strtok(NULL, ",");
		actori=strtok(NULL, ",");

		int v, d;
		v=atoi(vand);
		d=atoi(disp);
		if(actori!=NULL){
			Film* f=new Film(data, loc, d, v, n, actori);
			addElem(f);
			cout<<*f;
		}
		else if(data!=NULL){

			Artist* a=new Artist(data, loc, d, v, n);
			addElem(a);
			cout<<*a;

		}

	}

	delete[] string;
	string=NULL;
	delete[] actori;
	actori=NULL;
	delete[] n;
	n=NULL;
	delete[] vand;
	vand=NULL;
	delete[] disp;
	disp=NULL;
	delete[] loc;
	loc=NULL;
	delete[] data;
	data=NULL;

	f.close();
}




