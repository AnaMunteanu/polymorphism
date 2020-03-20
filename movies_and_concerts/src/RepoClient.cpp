/*
 * RepoClient.cpp
 *
 *  Created on: May 16, 2019
 *      Author: user
 */

#include"RepoClient.h"
#include<fstream>
using namespace std;
#include<string.h>


RepoClient::RepoClient(){
	size = 0;
	elements = new Client*[10];
}


RepoClient::RepoClient(const RepoClient &r){
	size = r.size;
	elements = new Client*[r.size];
	for (int i = 0; i < r.size; i++)
		elements[i] = r.elements[i]->clone();
}


RepoClient::~RepoClient(){
	if (elements){
		delete[] elements;
		elements = NULL;
	}
}


RepoClient& RepoClient::operator=(const RepoClient &r){
	if (this != &r){
		size = r.size;
		if (elements)
			delete[] elements;
		elements = new Client*[r.size];
		for (int i = 0; i < r.size; i++)
			elements[i] = r.elements[i]->clone();
	}
	return *this;
}


int RepoClient::getSize(){
	return size;
}


Client* RepoClient::getElem(int pos){
	if(pos<0 || pos>=size)
		throw Exception("pozitia trebuie sa fie intre 0 si dimensiunea vectorului...");
	return elements[pos];
}


void RepoClient::addElem(Client* el){

	elements[size++] = el->clone();
}



void RepoClient::update(Client* el, int pos){
	if(pos<0 || pos>=size)
		throw Exception("pozitia trebuie sa fie intre 0 si dimensiunea vectorului...");
	elements[pos]=el->clone();
}


void RepoClient::loadFromFileCsv(char* filename)
{
	ifstream f(filename);
	while (!f.eof())
	{
		char* username = new char[100];
		char* parola = new char[100];
		char* string = new char[100];
		f.getline(string, 100);
		username = strtok(string, ",");
		parola=strtok(NULL, ",");
		Client* c=new Client(username, parola);
		addElem(c);


	}
	f.close();
}

int RepoClient::search(Client* c){
	for(int i=0;i<size;i++)
		if(c->getUsername()==elements[i]->getUsername() && c->getParola()==elements[i]->getParola())
			return i;
	return -1;
}
