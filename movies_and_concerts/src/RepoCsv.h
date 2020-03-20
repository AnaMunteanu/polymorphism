/*
 * Repo.h
 *
 *  Created on: May 7, 2019
 *      Author: user
 */

#ifndef REPOCSV_H_
#define REPOCSV_H_


/*template <class T> class Repo{
protected:
	vector<T> vect;
public:
	Repo();
	Repo(const vector<T> &);
	Repo(const Repo <T> &);
	~Repo();
	void addElem(T);
	vector<T> getAll();
	void update(T, int);
	int getSize();
	friend ostream& operator<<(ostream & , const vector<T>& );
	bool operator==(const Repo <T> &);

};

template <class T> Repo<T>::Repo(){
	//constr without par
	this->vect.reserve(10);
}

template <class T> Repo <T>::Repo(const vector <T> &v){
	//constr with par
 	this->vect.clear();
 	for(int i=0; i<v.size(); i++)
 		this->vect.push_back(v[i]);
}

template <class T> Repo<T>::Repo(const Repo <T> &V){
	//copy constr
	this->vect.clear();
	for(int i=0; i<V.vect.size(); i++)
		 this->vect.push_back(V.vect[i]);

}

template <class T> Repo<T>::~Repo(){
	//destructor
	this->vect.clear();

}

template <class T> void Repo<T>::addElem(T e){
/*Descr:adauga un element in vector
 * In:elem de tip T
 * Out:vectorul modificat

	this->vect.push_back(e);
}

template <class T> vector<T> Repo<T>::getAll(){
/*Descr:returneaza vectorul
 * In:-
 * Out:vectorul


	return this->vect;
}

template <class T> int Repo<T>::getSize() {
/*Descr:returneaza nr de elemente din vector
 * In:-
 * Out:nr de elem

	return this->vect.size();
}

template <class T> ostream& operator<<(ostream& os, const vector<T> &t){
	os<<"Repo is: "<<endl;
	for(int i=0; i<t.vect.size(); i++)
		cout<<t.vect[i];
	return os;
}

template <class T> bool Repo<T>::operator==(const Repo <T> &t){
	if(t.vect.size()!=this->vect.size())
		return false;
	else
		for(int i=0; i<t.vect.size(); i++)
			if(this->vect[i]!=t.vect[i])
				return false;
	return true;
}

template <class T> void Repo<T>::update(T t, int pos){
	/*Desc:modifica obiectul de pe pozitia pos cu t
	* In:obiectul t, pozitia
	* Out:-

	this->vect[pos]=t;
}
*/
/*#include <vector>
#include "Spectacol.h"
#include <iostream>
using namespace std;

class Repo {
private:
	vector <Spectacol*> a;
public:
	Repo();
	Repo(vector <Spectacol*>);
	Repo(const Repo &);
	~Repo();
	Repo& operator=(const Repo);
	bool operator==(const Repo &r);
	void addElem( Spectacol*);
	int getSize();
	vector <Spectacol*> getAll();
	friend ostream& operator<<(ostream &, const Repo& );
	void update(Spectacol*, int);



};*/


#include <iostream>
#include "Exception.h"
#include"Spectacol.h"
#include"RepoBase.h"

class RepoCsv:public RepoBase{

public:
	RepoCsv();
	RepoCsv(const RepoCsv &r);
	~RepoCsv();
	void loadFromFile(char*);

};



#endif /* REPOCSV_H_ */
