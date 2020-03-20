/*
 * Controller.h
 *
 *  Created on: May 16, 2019
 *      Author: user
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include"RepoClient.h"
#include "RepoCsv.h"

class Controller{
	RepoClient c;
	RepoBase* s;
public:
	Controller();
	~Controller();
	Controller(RepoClient, RepoBase*);
	void updateClient(Client*, int);
	void listareClienti();
	void listareSpectacole();
	void clientLoadFromFileCsv(char* filename);
	void spectacolLoadFromFileCsv(char* filename);
	int search(Client*);
};


#endif /* CONTROLLER_H_ */
