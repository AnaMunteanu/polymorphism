/*
 * UI.cpp
 *
 *  Created on: May 16, 2019
 *      Author: user
 */
#include"Controller.h"
#include"UI.h"


UI::UI(){

	this->ctr=Controller();
}

UI::~UI(){

}

void UI::showmenu(){
	cout<<"1.Logare Client"<<endl;

}

void UI::run(){


	RepoClient c;

	RepoCsv* s=new RepoCsv();
	this->ctr=Controller(c, s);
	this->ctr.clientLoadFromFileCsv("Client.csv");
	this->ctr.listareClienti();
	this->ctr.spectacolLoadFromFileCsv("Spectacol.csv");
	this->ctr.listareSpectacole();
	try{
		Spectacol s("21.13.2019", "parc", 1, 6);

		}
	catch (Exception &exc){
		cout<<"exception: "<<exc.getMessage()<<endl;
		}

	try{
		Client* client=new Client("Matei", "9876");
		this->ctr.updateClient(client, 100);

	}
	catch(Exception &exc){
		cout<<"exception: "<<exc.getMessage()<<endl;
	}

	showmenu();
	int pos;
	pos=login();
	if(pos>=0){
		cout<<"V ati autentificat cu succes!"<<endl;
		this->ctr.spectacolLoadFromFileCsv("Spectacol.csv");}
	else
		cout<<"Autentificare esuata..."<<endl;

}

int UI::login(){
	string nume, parola;
	cout<<"Dati nume:"<<endl;
	getline(cin, nume);

	cout<<"Dati parola"<<endl;
	getline(cin, parola);

	Client* client=new Client(nume, parola);
	return this->ctr.search(client);

}
