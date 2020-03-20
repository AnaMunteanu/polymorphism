/*
 * RepoClient.h
 *
 *  Created on: May 16, 2019
 *      Author: user
 */

#ifndef REPOCLIENT_H_
#define REPOCLIENT_H_

 #include <iostream>
#include "Exception.h"
#include"Client.h"


class RepoClient{
private:
	int size;
	Client* *elements;
public:
	RepoClient();
	RepoClient(const RepoClient &r);
	~RepoClient();
	RepoClient& operator=(const RepoClient &r);
	int getSize();
	Client* getElem(int);
	void addElem(Client* el);
	void update(Client*, int);
	void loadFromFileCsv(char*);
	int search(Client*);

};




#endif /* REPOCLIENT_H_ */
