/*
 * Controller.cpp
 *
 *  Created on: May 16, 2019
 *      Author: user
 */

#include"Controller.h"

Controller::Controller(){
	c=RepoClient();

}

Controller::~Controller(){

}

Controller::Controller(RepoClient r1, RepoBase* r2){

	c=r1;
	s=r2;
}

void Controller::listareClienti(){
	cout<<"Clientii logati sunt:"<<endl;
	for(int i=0; i<c.getSize();i++)
		cout<<*(c.getElem(i))<<endl;
	cout<<endl;
}

void Controller::listareSpectacole(){
	cout<<"Spectacolele sunt:"<<endl;
	for(int i=0; i<s->getSize();i++)
		cout<<s->getElem(i)<<endl;
}

void Controller::clientLoadFromFileCsv(char* filename){
	/*Desc:populeaza repo de clienti cu obiecte din fisierul filename
	 * In:numele fisierului
	 * Out:-
	 */
	this->c.loadFromFileCsv(filename);
}

void Controller::spectacolLoadFromFileCsv(char* filename){
	/*Desc:populeaza repo de spectacole cu obiecte din fisierul filename
	* In:numele fisierului
	* Out:-
	 */
	this->s->loadFromFile(filename);
}

void Controller::updateClient(Client* client, int pos){
	this->c.update(client, pos);
}

int Controller::search(Client* client){
	return this->c.search(client);
}
