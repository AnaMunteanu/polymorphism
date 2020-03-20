/*
 * Client.cpp
 *
 *  Created on: May 15, 2019
 *      Author: user
 */

#include"Client.h"
#include<iostream>
using namespace std;

Client::Client(){
	username="";
	parola="";
}

Client::~Client(){
	username.clear();
	parola.clear();
}

Client::Client(string u, string p){

	username=u;
	parola=p;
}

Client::Client(const Client& c){

	username=c.username;
	parola=c.parola;
}

Client& Client::operator=(const Client & c){

	username=c.username;
	parola=c.parola;
	return *this;
}

string Client::getUsername(){

	return username;
}

string Client::getParola(){
	return parola;
}

void Client::setParola(string p){
	parola=p;
}

void Client::setUsername(string u){
	username=u;
}


ostream& operator<<(ostream& os, const Client& c){
	os<<"Username: "<<c.username<<" "<<"Parola: "<<c.parola;
	return os;
}

Client* Client::clone(){
	Client* newClient = new Client();
	newClient->setParola(this->parola);
	newClient->setUsername(this->username);
	return newClient;
}
