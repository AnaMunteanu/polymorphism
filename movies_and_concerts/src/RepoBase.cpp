/*
 * RepoBase.cpp
 *
 *  Created on: May 20, 2019
 *      Author: user
 */
#include"RepoBase.h"

RepoBase::RepoBase(){
	size = 0;
	elements = new Spectacol*[10];
}


RepoBase::RepoBase(const RepoBase &r){
	size = r.size;
	elements = new Spectacol*[r.size];
	for (int i = 0; i < r.size; i++)
		elements[i] = r.elements[i]->clone();
}


RepoBase::~RepoBase(){
	if (elements){
		delete[] elements;
		elements = NULL;
	}
}


RepoBase& RepoBase::operator=(const RepoBase &r){
	if (this != &r){
		size = r.size;
		if (elements)
			delete[] elements;
		elements = new Spectacol*[r.size];
		for (int i = 0; i < r.size; i++)
			elements[i] = r.elements[i]->clone();
	}
	return *this;
}


int RepoBase::getSize(){
	return size;
}


Spectacol* RepoBase::getElem(int pos){
	if(pos<0 || pos>=size)
		throw Exception("pozitia trebuie sa fie intre 0 si dimensiunea vectorului...");
	return elements[pos];
}


void RepoBase::addElem(Spectacol* el){

	elements[size++] = el->clone();
}



void RepoBase::update(Spectacol* el, int pos){
	if(pos<0 || pos>=size)
		throw Exception("pozitia trebuie sa fie intre 0 si dimensiunea vectorului...");
	elements[pos]=el->clone();
}


